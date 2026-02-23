#include "main.h"

/**
 * _strncpy - copys n bytes to another string
 * @dest: where the bytes are going
 * @src: where the bytes are from
 * @n: number of bytes
 *
 * Return: new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[j] != 0 && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
