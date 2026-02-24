#include "main.h"

/**
 * _memset - fills first n bytes pointed to by s with constant byte b
 * @s: string pointed to
 * @b: constant byte
 * @n: how many bytes of memory
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
