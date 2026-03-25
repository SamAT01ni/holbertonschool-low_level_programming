#include "main.h"

/**
 * print_line - prints a line how many characters long
 * @n: number of _ long
 *
 * Return: big line
 */

void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
