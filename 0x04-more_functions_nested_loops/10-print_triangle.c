#include "main.h"
/**
 * print_triangle - the func name
 * @size: the size of the triangle
 *
 * Description: to print triangle using # characters as per size
 *
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
	int height, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 1; height <= size; ++height)
		{
			for (base = 1; base <= size; ++base)
			{
				if ((height + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
