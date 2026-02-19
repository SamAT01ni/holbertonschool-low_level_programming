#include "main.h"

/**
 * cap_string - string where to capitalise the first letter of each word
 * @s: the string we capitalise
 *
 * Return: string with capitals
 */

char *cap_string(char *s)
{
	int i = 0;
	int cap = 1;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',')
		{
			cap = 1;
		}
		else if (s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?')
		{
			cap = 1;
		}
		else if (s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			cap = 1;
		}
		else if (s[i] == '"')
		{
			cap = 1;
		}
		else if (cap == 1 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			cap = 0;
		}
		i++;
	}
	return (s);
}

