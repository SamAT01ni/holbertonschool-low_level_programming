#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main
 * @argc: count
 * @argv: points to each arguement
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
