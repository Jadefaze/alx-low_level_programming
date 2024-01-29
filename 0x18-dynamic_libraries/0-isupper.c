#include "main.h"
/**
 * _isupper - to check whether upper or not
 *
 * @c: the character to check
 * Return: 0 Always
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
