#include "main.h"

/**
 * _puts - to print a string
 *
 * @str: takes the string to print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
