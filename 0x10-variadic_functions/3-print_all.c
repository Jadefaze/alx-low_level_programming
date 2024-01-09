#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - to print anything
 * @format: expected type to print out
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i, index;
	va_list ap;
	char *separator;
	format_t formats[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};

	separator = "";
	i = 0;

	va_start(ap, format);

	while (format && format[i])
	{
		index = 0;

		while (index < 4 && (format[i] != formats[index].c))
			index++;

		if (index < 4)
		{
			printf("%s", separator);
			formats[index].print(ap);
			separator = ", ";
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * print_char - to print char types in formatted printing
 * @arg: the va_list argument (unsupplied args)
 * Return: nothing
 */

void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}
/**
 * print_int - to print int types in formatted printing
 * @arg: varaible argument from va_list
 * Return: nothing
 */

void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

/**
 * print_float - to print double types in formatted printing
 * @arg: the variadic arg (from va_list)
 * Return: nothing
 */

void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * print_str - to print string types in formatted printing
 * @arg: va_list arg
 * Return: nothing
 */

void print_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);
	if (str == NULL)
	{
		printf("%s", "(nil)");
		return;
	}
	printf("%s", str);
}
