#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds
 * @a: first int
 * @b: second int
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - adds
 * @a: first int
 * @b: second int
 * Return: subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplys
 * @a: first int
 * @b: second int
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a: first int
 * @b: second int
 * Return: division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder
 * @a: first int
 * @b: second int
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
