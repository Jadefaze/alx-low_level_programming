#include "main.h"

/**
 *_print_rev_recursion  - to string in reverse
 * @s: string to print
 * Return: nothing (void)
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	if (s)
		_putchar(*s);
}
