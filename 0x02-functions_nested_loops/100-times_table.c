#include "main.h"

/**
 * print_times_table - the function name
 * @n: the parameter
 *
 * Description: To print times table
 *
 * Return: Always 0 (success)
 */
void print_times_table(int n)
{
	int prod, multi, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar(48);
			for (multi = 1; multi <= n; ++multi)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * multi;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
