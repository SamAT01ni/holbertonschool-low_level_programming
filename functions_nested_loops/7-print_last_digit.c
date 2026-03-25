#include "main.h"

/**
 * print_last_digit - tin, label
 * @n: number
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = last * -1;

	_putchar ('0' + last);
	return (last);
}
