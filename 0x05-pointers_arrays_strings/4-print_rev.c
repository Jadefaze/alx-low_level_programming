#include "main.h"

/**
 * print_rev - reverse printing with putchar and pointers
 * @s: takes in a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	/* get the las inde before null */
	int index;

	for (index = 0; s[index] != '\0'; ++index)
		;
	/*print the chars from last to first*/
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
