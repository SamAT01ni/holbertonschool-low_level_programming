#include <stdio.h>
#include <stdlib.h>

/**
 * num - checks if arg is a number
 * @s: string to check
 *
 * Return: 0 if not num, 1 if yes
 */

int num(char *s)
{
	int i = 0;

	if (s[0] == '\0')
	{
		return (0);
	}
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - adds up args
 * @argc: count
 * @argv: args
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (!num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
