#include "main.h"

/**
 * _strcmp - to compare strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 - equal strings
 * 1 - s1 greater than s2
 *-1 - s1 less than s2
 */

int _strcmp(char *s1, char *s2)
{
	int flag;
	int i;

	i = 0;
	while (*(s1 + i) || *(s2 + i))
	{
		if (*(s1 + i) == *(s2 + i))
		{
			flag = 0;
		}
		else
		{
			flag = (*(s1 + i)) - (*(s2 + i));
			return (flag);
		}
		i++;
	}

	return (flag);
}
