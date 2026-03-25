#include "main.h"

/**
 * times_table - prints the times tables
 *
 * Return: void
 */

void times_table(void)
{
	int n1 = 0;
	int n2;
	int sum;
	int first;
	int sec;

	while (n1 <= 9)
	{
		n2 = 0;
		while (n2 <= 9)
		{
			sum = n1 * n2;
			first = sum / 10;
			sec = sum % 10;

			if (n2 == 0)
			{
				_putchar('0' + sum);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (sum <= 9)
				{
					_putchar(' ');
					_putchar('0' + sum);
				}
				else
				{
					_putchar('0' + first);
					_putchar('0' + sec);
				}
			}
			n2++;
		}
		_putchar('\n');
		n1++;
	}
}
