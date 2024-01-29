#include "main.h"

/**
 * _strpbrk - search string for any set of bytes
 *
 * @s: string
 * @accept: substring
 *
 * Return: pointer to first occurence of s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != 0; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
