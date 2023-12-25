#include "main.h"

/**
 * _abs - print absolute value of a number
 *
 * Description: as above
 * @n: value to convert
 * Return: 0 Always.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);

	}
	return (0);
}
