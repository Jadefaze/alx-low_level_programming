#include "main.h"
/**
 * print_numbers - the func name
 *
 * Description: to print numbers from 0-9 folowed by a new line
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; ++c)
		_putchar(c);
	_putchar('\n');
}
