#include "main.h"

/**
 * puts2 - program that prints every other character
 * @str: the string thats changing
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i = i + 1;
	}
	_putchar('\n');
}
