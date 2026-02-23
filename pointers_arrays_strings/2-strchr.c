#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns a pointer to the first occurence of a character
 * @s: string with the stuff
 * @c: character in question
 *
 * Return: pointer to the first ocurrence of the character and NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
