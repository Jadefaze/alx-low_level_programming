#include "main.h"

/**
 * _islower - checks whether lower or not
 *
 * Description: as above
 * @c: character to check
 * Return: void Always.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
