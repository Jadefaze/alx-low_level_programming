#include "main.h"
/**
 * print_line - the func name
 * @n: param / size of the line
 *
 * Description: to draw a staright line in terminal
 *
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int counter;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (counter = 1; counter <= n; ++counter)
			_putchar('_');
		_putchar('\n');
	}
}
