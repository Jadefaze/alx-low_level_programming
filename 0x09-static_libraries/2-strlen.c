#include "main.h"

/**
 * _strlen - to check string length
 *
 * @s: the string to check
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0; /*String length */
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
