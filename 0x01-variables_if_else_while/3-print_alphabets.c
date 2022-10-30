#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: to lower alphabet in lower case then upper case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';
	char LETTER = 'A';

	/*print the lower case */
	while (letter <= 'z')
	{
		putchar(letter);
		++letter;
	}
	/* print the upper case */
	while (LETTER <= 'Z')
	{
		putchar(LETTER);
		++LETTER;
	}
	putchar('\n');
	return (0);
}
