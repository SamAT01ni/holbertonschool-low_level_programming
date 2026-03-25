#include "main.h"

/**
 * _puts - command prints a string
 * @str: parameter and string
 *
 * Return: 0
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len = len + 1;
	}
	_putchar('\n');
}
