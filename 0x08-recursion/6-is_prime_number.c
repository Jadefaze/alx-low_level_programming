#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - to check for a prime num
 * @n: the num to check
 * Return: 1 for prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculate if num is prime recursively
 * @n: num to check
 * @i: the iterator
 * Return: 1 for prime, 0 otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
