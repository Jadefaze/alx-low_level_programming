#include "main.h"

/**
 * _isalpha - checks whether lower or not
 *
 * Description: as above
 * @c: character to check
 * Return: void Always.
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
