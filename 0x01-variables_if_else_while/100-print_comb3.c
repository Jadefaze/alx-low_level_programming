#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: To print combination of 2s
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int m, n;

	for (m = 48; m < 58; m++)
	{
		for (n = 49; n < 58; n++)
			if (n > m)
			{
				putchar(m);
				putchar(n);
				if (m != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
