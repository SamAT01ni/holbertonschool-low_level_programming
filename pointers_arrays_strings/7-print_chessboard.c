#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: where the board is
 *
 * Return: a chess board :)
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
			{
				_putchar(a[i][j]);
			}
			j++;
		}
		i++;
	}
}
