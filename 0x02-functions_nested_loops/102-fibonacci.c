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
	int x0 = 1, x1 = 2, x2;
	int count = 2;

	printf("%d, %d, ", x0, x1);
	while (count <= 50)
	{
		x2 = x0 + x1;
		printf("%d, ", x2);
		x0 = x1;
		x1 = x2;
		count += 1;
	}
	printf("\n");
}




