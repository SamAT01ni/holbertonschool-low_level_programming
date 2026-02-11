#include "main.h"
#include <unistd.h>

/**
 * main - who knows man
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c = 'a';

	while(c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
