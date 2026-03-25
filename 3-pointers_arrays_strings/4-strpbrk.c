#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates first appearance of a byte in accept
 * @s: string checked
 * @accept: accepted characters
 *
 * Return: pointer to byte s that matches, else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
