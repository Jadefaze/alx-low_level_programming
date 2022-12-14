#include "main.h"
/**
 * times_table - the function name
 *
 * Description: 9 times table starting with 0
 *
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int i, j, multi;

	for (i = 0; i <= 9; ++i)
	{
		_putchar(48);
		for (j = 1; j <= 9; ++j)
		{
			_putchar(',');
			_putchar(' ');

			multi = i * j;

			/*
			 * put space if mulit is single number
			 * place the first digit if its two numbers or more
			 */
			if (multi <= 9)
				_putchar(' ');
			else
				_putchar((multi / 10) + 48); /*get first digit */
			_putchar((multi % 10) + 48); /* get second digit */
		}
		_putchar('\n');
	}
}

