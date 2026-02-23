#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds first occurence in a string
 * @haystack: place searched
 * @needle: the characters to be found
 *
 * Return: pointer to beginning of substring, or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	if (*needle == '\0')
	{
		return haystack;
	}
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
