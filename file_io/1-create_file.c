#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: null terminating string to write
 *
 * Return: 1 if succes, or -1 if not good
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename,
			O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write(fd, text_content, i);
		if (write(fd, text_content, i) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
