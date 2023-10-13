#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - to print numbers with given separator
 * @separator: the char to separate the chars
 * @n: the number of args to be passed
 * Return: nothing (void)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		num = va_arg(args, int);
		if (separator != NULL)
			printf("%i%s", num, separator);
		else
			printf("%i", num);
	}
	num = va_arg(args, int);
	printf("%i\n", num);
}
