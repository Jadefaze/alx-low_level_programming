#include "main.h"
/**
 *print_alphabet - Entry point
 *
 * Description: To print the alpabet using _putchar
 *
 * Return: ALways 0 (success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
		_putchar(letter);
	_putchar('\n');
}
