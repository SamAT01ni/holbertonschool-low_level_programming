#include <stdio.h>

/**
 * main - seems deceiving
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);

		if (n == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
