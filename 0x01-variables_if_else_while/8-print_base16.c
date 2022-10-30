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
	char letter = 'a';

	while (number <= 57) /*102 is the decimal rep of f */
	{
		putchar(number);
		++number;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		++letter;
	}
	putchar('\n');
	return (0);
}
