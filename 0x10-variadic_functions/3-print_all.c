#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - to print anything
 * @format: expected type to print out
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	float value_f;
	char *value_s, *separator, value_c;
	int format_len, i, value_i;

	va_start(ap, format);
	format_len = str_len(format);
	separator = ", ";
	i = 0;
	while (format[i])
	{
		if (i == format_len - 1)
			separator = "";
		switch (format[i])
		{
			case 'c':
				value_c = va_arg(ap, int);
				printf("%c", value_c);
				printf("%s", separator);
				break;
			case 'i':
				value_i = va_arg(ap, int);
				printf("%i", value_i);
				printf("%s", separator);
				break;
			case 'f':
				value_f = va_arg(ap, double);
				printf("%f", value_f);
				printf("%s", separator);
				break;
			case 's':
				value_s = va_arg(ap, char*);
				printf("%s", value_s);
				printf("%s", separator);
				break;
		}
		i++;
	}
	printf("\n");
}

/**
 * str_len - find string length
 * @str: the string
 * Return: length
 */

int str_len(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
