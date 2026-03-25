#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string, new pointer
 * @str: the string duplicated
 *
 * Return: NULL if null, or pointer to duplicate string
 */

char *_strdup(char *str)
{
	int i = 0;
	int len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';
	return (dup);
}
