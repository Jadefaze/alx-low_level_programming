#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This to print hexadecimal values
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int number = 48; /* decimal rep of 0*/

	while (number <= 192) /*102 is the decimal rep of f */
	{
		putchar(number);
		/*after 9 we jump till 96 */
		if (number == 57)
			number += 39;
		++number;
	}
	putchar('\n');
	return (0);
}
