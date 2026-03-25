#include "main.h"

/**
 * swap_int - will swap 2 integers
 * @a: first int
 * @b: second int
 *
 * Return: swapped integers
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
