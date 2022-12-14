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
	int count;

	if (n > 98)
		for (count = n; count > 98; --count)
			printf("%d, ", count);
	else
		for (count = n; count < 98; ++count)
			printf("%d, ", count);
	printf("98\n");
}



