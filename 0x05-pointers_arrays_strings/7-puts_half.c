#include "main.h"
/**
 * puts_half - half string print
 * @str: a string input
 *
 * return: nothing
 */
void puts_half(char *str)
{
	int i, half;

	i = 0;

	while (str[i] != '\0')
		i++;
	half = i / 2;

	if (i % 2 != 0)
		half = ((i - 1) / 2) + 1;
	for (; half < i; half++)
		_putchar(str[half]);
	_putchar('\n');
}

