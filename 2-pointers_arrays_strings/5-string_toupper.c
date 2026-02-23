#include "main.h"

/**
 * string_toupper - changes lower case letters to uppercase
 * @s: string to change
 *
 * Return: upper case letters
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
