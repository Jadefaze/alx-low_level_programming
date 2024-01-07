#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - to print strings separated by comma
 * @separator: string to separate the strings
 * @n: expected number of strings
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		printf("%s", str != NULL ? str : "(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
