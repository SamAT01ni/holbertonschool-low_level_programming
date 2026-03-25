#include "main.h"

/**
 * _abs - finds absolute value
 * @c: see abs val
 *
 * Return: absolute value
 */

int _abs(int c)
{
	if (c < 0)
	{
		int absval;

		absval = c * -1;
		return (absval);
	}
	return (c);
}
