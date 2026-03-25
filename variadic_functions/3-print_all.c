#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints whatever the type
 * @format: list of types of args
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *str;
	char *sep = "";

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(list, int));
				sep = ", ";
				break;
			case 'i':
				printf("%s%d", sep, va_arg(list, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s%f", sep, va_arg(list, double));
				sep = ", ";
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				sep = ", ";
				break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
