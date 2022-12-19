#include "main.h"

/**
 * _puts - to print out a string
 * @str: takes a string pointer
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str)
	{
		if (*str != '\n')
		{
			_putchar(*str);
		}
		else
			_putchar('\n');
		str++;
	}
	_putchar('\n');
}
