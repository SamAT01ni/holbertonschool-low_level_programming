#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - gets the sums of numbers in each diagonal (cross)
 * @a: where the numbers are
 * @size: size of each side of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int di1 = 0;
	int di2 = 0;

	while (i < size)
	{
		di1 += a[i * size + i];
		di2 += a[i * size + (size - 1 + i)];
		i++;
	}
	printf("%d, %d\n", di1, di2);
}
