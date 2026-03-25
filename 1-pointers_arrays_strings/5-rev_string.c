#include "main.h"

/**
 * rev_string - reverses the string and i think stores it
 * @s: gotta define the boy
 *
 * Return: 0
 */

void rev_string(char *s)
{
	char c;
	char *start = s;
	char *end = s;

	while (*end)
		end = end + 1;

	end = end - 1;

	while (start < end)
	{
		c = *start;
		*start = *end;
		*end = c;
		start++;
		end--;
	}
}
