#include <stdio.h>

/**
 * main - entry point
 *
 * Description: to print fibonacci numbers
 *
 * Return: anything
 */
int main(void)
{
	int n;
	unsigned long fib1 = 0, fib2 = 1, sum;
	for (n = 0; n < 50; n++)
	{
		sum = fib1 + fib2;

		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;

		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}




