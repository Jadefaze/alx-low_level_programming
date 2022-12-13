#include "main.h"
/**
 * print_last_digit - the function name
 * @n: it takes in n as an argument
 *
 * Description: This is to print out the digit of a number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
