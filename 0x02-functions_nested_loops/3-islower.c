#include "main.h"

/**
 * main - check whether character is lower
 *
 * Returns: 1 if c is lowercase otherwise 0
 */
int _islower(int c)
{
	int result;
	if(c >= 'a' && c <='z')
	{
		result = 0;
	}
	else
	{
		result = 1;
	}
	return result;
}
	 
