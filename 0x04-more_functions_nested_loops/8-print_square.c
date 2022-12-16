#include "main.h"
/**
 * print_square - func name
 * @size: the size of the square
 *
 * Description: to print a sqaure followed new line
 *
 * Return: Always 0 (success)
 */
void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; ++row)
	{
		for (column = 1; column <= size; ++column)
			_putchar('#');
		_putchar('\n');
	}
}
