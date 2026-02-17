#include "main.h"

/**
 * _strlen - counts characters in a string
 * @s: parameters
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;
	while (s[len] != '\0')
	{
		len = len + 1;
	}
	return (len);
}
