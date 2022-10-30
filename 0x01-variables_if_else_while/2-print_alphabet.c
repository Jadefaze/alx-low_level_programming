#include <stdio.h>
/**
 * main - Entry point, function to print alphabet
 *
 * Description: print alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		++letter;
	}
	putchar('\n');
	return (0);
}
