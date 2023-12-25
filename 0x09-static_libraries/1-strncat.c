#include "main.h"

/**
 * _strncat - to concatenate strings
 * @dest: the new string
 * @src: the first string
 * @n: atmost bytes from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len;

	dest_len = 0;
	i = 0;

	while (*(dest + dest_len))
	{
		dest_len++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
