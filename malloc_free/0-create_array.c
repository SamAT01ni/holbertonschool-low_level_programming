#include "main.h"
#include <stdlib.h>

/**
 * create_array - makes the array
 * @size: size of the array
 * @c: the character
 *
 * Return: the array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(c));
	if (ar == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
