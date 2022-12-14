#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function name
 * @n: the starting point of the count down
 *
 * Description: to count and print to 98 from any number n
 *
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	if (n <= 98)
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	else
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
}



