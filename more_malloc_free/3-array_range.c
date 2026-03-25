#include "main.h"
#include <stdlib.h>

/**
 * array_range- creates array of integers
 * @min: lowest value
 * @max: max value
 *
 * Return: NULL if nothing, array if work
 */

int *array_range(int min, int max)
{
	int *ptr;
	int minhold = min;
	int n = 0;

	if (min > max)
	{
		return (NULL);
	}
	while (minhold <= max)
	{
		n++;
		minhold++;
	}
	ptr = malloc(n * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	n = 0;
	for (; min <= max; min++)
	{
		ptr[n] = min;
		n++;
	}
	return (ptr);
}
