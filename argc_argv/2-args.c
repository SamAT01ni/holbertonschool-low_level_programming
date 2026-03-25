#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints each arg with new line
 * @argc: count
 * @argv: data of each arg
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
