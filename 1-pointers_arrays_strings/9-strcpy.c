#include "main.h"

/**
 * *_strcpy - copies a string to something else
 * @dest: new copy
 * @src: original string
 *
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (src[len] != 0)
	{
		len = len + 1;
	}
	while (i < len)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[len] = '\0';
	return (dest);
}
