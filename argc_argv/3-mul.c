#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 args
 * @argc: count
 * @argv: args
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
}
