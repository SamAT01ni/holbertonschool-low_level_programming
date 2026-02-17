#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: defines *s and parameters
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != 0)
	{
		len = len + 1;
	}

	while (len >= 0)
	{
		_putchar(s[len]);
		len = len - 1;
	}
	_putchar('\n');
}
