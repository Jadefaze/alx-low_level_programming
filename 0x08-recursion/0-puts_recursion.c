#include "main.h"

/**
 * _puts_recursion - to print a string followed by a new line
 * @s: pointer to string to be printed (basically the string itself)
 * Return: nothing (void)
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*(s + 1) == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
}
