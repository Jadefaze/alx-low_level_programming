#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - to return natural square root
 * @n: the number for which to get the square root
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find natural
 *		square roor of a num
 * @n: num to get the square root
 * @i: the iterator
 * Return: the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
