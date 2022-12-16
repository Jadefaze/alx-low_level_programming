#include "main.h"
/**
 * print_most_numbers - the func name
 *
 * Description: To print 0-9 but not 2 and 4, use put only twice
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; ++c)
	{
		if (c != 50 && c != 52)
			_putchar(c);
	}
	_putchar('\n');
}
