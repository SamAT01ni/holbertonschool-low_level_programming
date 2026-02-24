#include "main.h"

/**
 * _strspn - searches for first character that doesnt match
 * @s: string inspected
 * @accept: accepted characters
 *
 * Return: position of first different character
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int found = 0;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found == 0)
		{
			break;
		}
		i++;
	}
	return (i);
}
