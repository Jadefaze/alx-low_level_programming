#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: to print sing digit numbers of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%i", number);
		++number;
	}
	putchar('\n');
	return (0);
}
