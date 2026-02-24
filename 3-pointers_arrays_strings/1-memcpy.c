#include "main.h"

/**
 * _memcpy - copies n bytes from src to a dest
 * @dest: destination stirng
 * @src: memory area to be copied
 * @n: unsigned int, number of bytes
 *
 * Return: updated string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
