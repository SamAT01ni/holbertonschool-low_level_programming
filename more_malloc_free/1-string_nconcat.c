#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - cats 2 strings for n bytes
 * @s1: first string
 * @s2: 2nd string, might not get all
 * @n: no of bytes of s2 used
 *
 * Return: catted strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	int len1, len2;
	int n1 = n;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		;
	}
	if (n1 >= len2)
	{
		n1 = len2;
	}
	ptr = malloc((len1 + n1 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n1; j++)
		ptr[i + j] = s2[j];
	ptr[len1 + n1] = '\0';
	return (ptr);
}
