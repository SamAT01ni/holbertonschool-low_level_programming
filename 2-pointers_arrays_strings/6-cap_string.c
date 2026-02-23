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
	int j;
	int cap = 1;
	char gap[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		j = 0;
		while (gap[j] != '\0')
		{
			if (s[i] == gap[j])
			{
				cap = 1;
				break;
			}
			j++;
		}

		if (cap == 1 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			cap = 0;
		}
		else if (s[i] != gap[j])
		{
			cap = 0;
		}
		i++;
	}
	return (s);
}
