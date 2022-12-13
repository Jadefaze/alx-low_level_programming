#include "main.h"

/**
 * print_sign - the function
 * @n: the number to test
 *
 * Description: to test whther a number is positive or negative
 *
 * Return: 1 for positive otherwise 0
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}
