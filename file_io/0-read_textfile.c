#include "main.h"

/**
 * read_textfile - reads text file and prints it to the POSIX stdout
 * @filename: given filename
 * @letters: number of letters to print
 *
 * Return: actual numver of letters it can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	nread = read(fd, buffer, letters);
	if (nread == -1)
		return (0);

	nwrite = write(STDOUT_FILENO, buffer, nread);
	if (nwrite != nread)
	{
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (nwrite);
}
