#include <stdio.h>

/**
 * main - hexadecimal babyyyy
 *
 * Return: 0
 */

int main(void)
{
	int num;
	char l = 'a';

	while (num <= 9)
	{
		putchar('0' + num);
		num++;
	}

	while (l <= 'f')
	{
		putchar(l);
		l++;
	}

	putchar('\n');
	return (0);
}
