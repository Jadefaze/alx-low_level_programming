#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point  to determine where a rand is positive or negative
 *
 * Description: print value of n status i.e +v, -ve or zero
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*my code */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
