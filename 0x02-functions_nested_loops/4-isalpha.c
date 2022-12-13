#include "main.h"

/**
 * _isalpha - Entry point
 * @c: the character to test
 *
 * Description: 'To check whether character is in the alphabet
 *
 * Return: 1 for success otherwise 0
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		result = 1;
	else
		result = 0;
	return (result);
}
