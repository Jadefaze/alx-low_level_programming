#include "variadic_functions.h"

/**
 * sum_them_all - to addup all args passed
 * @n: number of args passed
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	sum = 0;

	if (n == 0)
		return (sum);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
