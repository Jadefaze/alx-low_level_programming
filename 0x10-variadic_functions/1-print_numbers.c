#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - to print out ints with separator between
 * @separator: the char to separate the numbers
 * @n: the number of ints to be passed (printed)
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(ap, int), separator);
	}

	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
