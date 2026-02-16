#include "main.h"

/**
 * print_diagonal - prints diagonal lines its kinda cool
 * @n: lines
 *
 * Return: big lines
 */

void print_diagonal(int n)
{
	int i = 0;
	int space;

	if (n > 0)
	{
		while (i < n)
		{
			space = 1;
			while (space <= i)
			{
				_putchar(' ');
				space = space + 1;
			}
			_putchar('\\');
			i++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
