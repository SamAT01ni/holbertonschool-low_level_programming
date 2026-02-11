#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - abc and all that
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
