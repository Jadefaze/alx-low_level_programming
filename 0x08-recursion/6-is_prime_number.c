#include "main.h"

/**
 * is_prime_number - to check whether num is prime or not
 * @n: the number to check
 * Return: 1 for true, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (!is_prime_number_helper(n, n - 1));  
}

int is_prime_number_helper(int n, int factor)
{
	if (factor <= 1)
		return (0);
	if (factor * factor > n)
		return (0);
	if (n % factor == 0)
		return (1);
	return (is_prime_number_helper(n, factor - 1));
}
