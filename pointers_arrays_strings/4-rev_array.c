#include "main.h"

/**
 * reverse_array - we gotta flip that
 * @a: pointer a
 * @n: number of elements in  the array
 *
 * Return: flipped array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
