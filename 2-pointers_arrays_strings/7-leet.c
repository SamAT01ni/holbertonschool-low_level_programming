#include "main.h"

/**
 * leet - changes letter a e o t and l
 * @s: string
 *
 * Return: changed letters
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	while (s[i])
	{
		j = 0;
		while (let[j] != '\0')
		{
			if (s[i] == let[j])
			{
				s[i] = num[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
