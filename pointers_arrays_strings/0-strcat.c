#include "main.h"

/**
 * _strcat - makes a function to concatenates 2 strings
 * @dest: first string
 * @src: 2nd string
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i = i + 1;
		j = j + 1;
	}
	dest[i] = '\0';

	return (dest);
}
