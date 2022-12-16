#include <stdio.h>
/**
 * positive_or_negative - entry point
 * @i: param
 *
 * Description: to print...
 *
 * Return: Always 0 success
 */
void positive_or_negative(int i)
{
	if (i == 0)
		printf("%d is zero\n", i);
	else if (i > 0)
		printf("%d is positive\n"i);
	else
		printf("%d is negative\n", i);
}
