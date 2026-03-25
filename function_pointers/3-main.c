#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - fn
 * @argc: count
 * @argv: args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", ptr(a, b));
	return (0);
}
