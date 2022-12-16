#include "main.h"
/**
 * print_diagonal - func name
 * @n: number times character is printed
 *
 * Description: to print a diagonal using '\' character
 *
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int position, spacing;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (position = 1; position <= n; ++position)
		{
			for (spacing = 1; spacing <= position; ++spacing)
				_putchar(' ');
			_putchar(92);/*backlash equaivalent*/
			_putchar('\n');
		}
	}
}

