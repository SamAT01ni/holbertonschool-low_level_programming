#include "main.h"

/**
 * puts_half - only prints the 2nd half
 * @str: the string of which half is printed
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0;
	int half;

	while (str[i] != 0)
	{
		i++;
	}

	if (i % 2 == 0)
	{
		half = i / 2;
		while (str[half] != 0)
		{
			_putchar(str[half]);
			half = half + 1;
		}
	}
	else
	{
		half = (i + 1) / 2;
		while (str[half] != 0)
		{
			_putchar(str[half]);
			half = half + 1;
		}
	}
	_putchar('\n');
}
