#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - use a variadic function to sum all given ints
 * @n: a given integer
 * Return: total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, tot = 0;
	va_list list;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		tot += va_arg(list, int);
	}
	va_end(list);
	return (tot);
}
