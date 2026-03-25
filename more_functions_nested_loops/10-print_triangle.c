#include "main.h"

/**
 * print_triangle - right angle triangle push right
 * @size: size of the triangle in hashs and lines
 *
 * Return: big ass triangle
 */

void print_triangle(int size)
{
	int gaps;
	int tris;
	int i = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (i <= size)
	{
		tris = 0;
		gaps = size - i;

		while (gaps > 0)
		{
			_putchar(' ');
			gaps = gaps - 1;
		}
		while (tris < i)
		{
			_putchar('#');
			tris = tris + 1;
		}
		i = i + 1;
		_putchar('\n');
	}
}
