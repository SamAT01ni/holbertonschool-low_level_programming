#include "main.h"
#include <stdio.h>

/**
 * main - fizz and buzz
 *
 * Return: number or fizz or buzz or fizzbuzz
 */

int main(void)
{
	int i = 1;
	int fiz;
	int buz;

	while (i <= 100)
	{
		fiz = i % 3;
		buz = i % 5;

		if (fiz == 0 && buz == 0)
		{
			printf("FizzBuzz ");
		}
		else if (fiz == 0 && buz != 0)
		{
			printf("Fizz ");
		}
		else if (fiz != 0 && buz == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i = i + 1;
	}
	printf("\n");
	return (0);
}
