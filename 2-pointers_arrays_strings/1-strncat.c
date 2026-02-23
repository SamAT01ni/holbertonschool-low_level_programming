#include "main.h"

/**
 * _strncat - concatenates 2 strings for up to n bytes
 * @dest: first string
 * @src: string we get additional bytes from
 * @n: number of bytes added
 *
 * Return:  bigger string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		else
		{
			break;
		}
	}
	dest[i] = '\0';
	return (dest);
}
