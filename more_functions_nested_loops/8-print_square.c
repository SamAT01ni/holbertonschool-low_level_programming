#include "main.h"

/**
 * print_square - uses hashtags to make square
 * @size: size of each side
 *
 * Return: a big or little square
 */

void print_square(int size)
{
	int x;
	int y = 0;

	if (size > 0)
	{
		while (y < size)
		{
			x = 0;
			while (x < size)
			{
				_putchar('#');
				x = x + 1;
			}
			y = y + 1;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
