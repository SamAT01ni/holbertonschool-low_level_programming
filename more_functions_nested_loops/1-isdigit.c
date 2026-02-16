#include "main.h"

/**
 * _isdigit - checks if between right ascii values
 * @c: integer to be checked
 *
 * Return: 1 if digit, 0 is not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
