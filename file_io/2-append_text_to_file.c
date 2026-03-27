#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: name of file
 * @text_content: string of text
 *
 * Return: 1 if good, -1 if bad
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, help;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	help = write(fd, text_content, i);
	if (help == -1)
		return (-1);

	close(fd);
	return (1);
}
