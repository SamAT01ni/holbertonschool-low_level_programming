#include "main.h"

/**
 * primehelp - checks if prime
 * @a: ==n
 * @b: checking number
 *
 * Return: if prime or not
 */

int primehelp(int a, int b)
{
	if (a <= 1 || a % b == 0)
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	else if (a > b)
	{
		(primehelp(a, b + 1));
	}
	return (1);
}

/**
 * is_prime_number - checks if a number is prime
 * @n: integer checked
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (primehelp(n, 2));
}
