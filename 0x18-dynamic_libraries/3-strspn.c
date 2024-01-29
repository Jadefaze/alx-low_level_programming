#include "main.h"

/**
 * _strspn - to get length of substring
 *
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes
 */

unsigned int  _strspn(char *s, char *accept)
{
	int i;/*number of bytes*/
	unsigned int size;
	int j;

	size = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		j = 0;
		while (*(accept + j) != *(s + i) && accept[j] != '\0')
		{
			j++;
		}
		if (*(accept + j) == *(s + i))
		{
			size += 1;
		}
		else
		{
			break;
		}
	}
	return (size);
}
