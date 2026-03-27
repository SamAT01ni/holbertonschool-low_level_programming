#include "main.h"

#define MAXSIZE 1024

/**
 * close_fd_or_exit - close or exit
 * @fd: file descriptor to close
 *
 * Return: void
 */

void close_fd_or_exit(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on success, exits with codes 97-100 on failure
 */

int main(int argc, char *argv[])
{
	int fd0, fd1;
	ssize_t nread, nwrite;
	char buffer[MAXSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd0 = open(argv[1], O_RDONLY);
	if (fd0 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_fd_or_exit(fd0);
		exit(99);
	}
	while ((nread = read(fd0, buffer, MAXSIZE)) > 0)
	{
		nwrite = write(fd1, buffer, nread);
		if (nwrite != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_fd_or_exit(fd0);
			close_fd_or_exit(fd1);
			exit(99);
		}
	}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_fd_or_exit(fd0);
		close_fd_or_exit(fd1);
		exit(98);
	}
	close_fd_or_exit(fd0);
	close_fd_or_exit(fd1);
	return (0);
}
