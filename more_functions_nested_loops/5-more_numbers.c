#include "main.h"

/**
 * more_numbers - from 0 to 14, 10 times
 *
 * Return: numbers
 */

void more_numbers(void)
{
	int repeat = 0;
	int i;

	while (repeat <= 9)
	{
		i = 0;

		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}

			_putchar(i % 10  + '0');
			i = i + 1;
		}

		_putchar('\n');
		repeat++;
	}
}
