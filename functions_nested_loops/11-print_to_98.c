#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - gets to 98 1 number at a time
 * @n: starting number
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
