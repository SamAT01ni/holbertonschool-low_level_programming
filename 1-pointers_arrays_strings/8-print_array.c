#include "main.h"
#include <stdio.h>

/**
 * print_array - prints each value in the array
 * @a: pointer to a value in the array
 * @n: itneger in array
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
		i = i + 1;
	}
	printf("\n");
}
