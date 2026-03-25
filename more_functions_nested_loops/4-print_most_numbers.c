#include "main.h"

/**
 * print_most_numbers - dont print 2 or 4 bc they are in the files
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
			i = i + 1;
		}
		else
		{
			i = i + 1;
			continue;
		}
	}
	_putchar('\n');
}
