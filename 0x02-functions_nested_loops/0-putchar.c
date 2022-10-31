#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: To print _putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[] = "_putchar";
	int letter;

	for (letter = 0; letter < 8; ++letter)
		_putchar(str[letter]);
	_putchar('\n');

	return (0);
}
