#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: 2nd string
 *
 * Return: concat strings
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}
	while (s2[j] != '\0')
	{
		j++;
		len2++;
	}

	cat = malloc((len1 + len2 + 1) * sizeof(char));
	if (cat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		cat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		cat[i + j] = s2[j];
	}
	cat[len1 + len2] = '\0';
	return (cat);
}
