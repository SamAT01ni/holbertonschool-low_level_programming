#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - goes through each element of an array
 * @array: the array in question
 * @size: array size
 * @action: pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
