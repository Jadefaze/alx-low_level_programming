#include "main.h"
/**
 * _isdigit - to check whether upper or not
 *
 * @c: the character to check
 * Return: 0 Always
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
