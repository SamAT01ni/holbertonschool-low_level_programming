#include "main.h"

/**
 * help - need it to go from 1 to n
 * @a: same as n
 * @b: guess number
 *
 * Return: 1 if has a sqrt, -1 if not
 */

int help(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (help(a, b + 1));
}

/**
 * _sqrt_recursion - finds sqrt of a number
 * @n: int
 * this will be changing the 2nd number until the square is >n or ==n
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	return (help(n, 1));
}
