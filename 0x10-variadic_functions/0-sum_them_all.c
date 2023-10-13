#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all args passed
 * @n: num of args to be passed
 * Return: sum or 0;
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int i;

	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	return (sum);

}
