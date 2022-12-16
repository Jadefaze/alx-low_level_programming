#include <stdio.h>
/**
 * main - the fizz-Buzz test
 *
 * Description: print numbers 1 - 100, new line,
 *	for multiples of 3 print Fizz of the number
 *	for multiples of 5 print buzz
 *	for multiples of both 3 and 5 print FizzBuzz
 *	each number or word separated by a space
 *	standard library allowed
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; ++num)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
