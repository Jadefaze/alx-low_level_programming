#include "main.h"

/**
 * _pow_recursion - to find x to power y
 * @x: the base
 * @y: the exponent (power)
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
