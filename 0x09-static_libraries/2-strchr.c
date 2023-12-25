#include "main.h"

/**
 * _strchr - to locate a char in a string
 *
 * @s: string
 * @c: the character to find
 *
 * Return: pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i]== c)
		{
			return (s + i);
		}
		++i;
	}
	return (0);
}
