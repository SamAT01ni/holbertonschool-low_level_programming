#include "main.h"

/**
 * _atoi - converts a number in a string into an integer
 * @s: the string holding the number
 *
 * Return: 0
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 0;
	int res = 0;
	int appsign = 1;
	int start = 0;

	while (s[i] != '\0')
	{
		if ((s[i] == '-' || s[i] == '+') && start == 0)
		{
			if (s[i] == '-')
				sign = sign + 1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			start = 1;
			res = res * 10 + (s[i] - '0');
		}
		else if (start == 1)
		{
			break;
		}
		i = i + 1;
	}
	i = 0;
	if (sign % 2 != 0)
	{
		appsign = -1;
	}
	return (appsign * res);
}
