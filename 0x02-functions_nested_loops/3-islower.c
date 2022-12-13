#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: 'To check whether character is lower'
 *
 *@c: character for testing
 *
 * Return: 1 if c is lowercase otherwise 0
 */
int _islower(int c) /* the char to be tested */
{
	int result; /* to store our result either 0 or 1 */

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
