#include "main.h"

/**
 * print_numbers - i printa da number
 *
 * Return: i returna da number
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
