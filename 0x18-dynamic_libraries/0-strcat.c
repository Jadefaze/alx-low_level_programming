#include "main.h"

/**
 * _strcat - to concatenate strings
 * @dest: the new string
 * @src: the first string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *str1, *str2;
	int i, j;

	str1 = dest;
	str2 = src;

	i = 0;
	while (*(dest + i))
	{
		str1++;
		i++;
	}

	j = 0;
	while (*(src + j))
	{
		*str1 = *str2;
		str2++;
		str1++;
		j++;
	}
	return (dest);
}
