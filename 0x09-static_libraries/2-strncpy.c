#include "main.h"

/**
 * _strncpy - to copy string
 * @dest: the new string
 * @src: the first string
 * @n: atmost bytes from src
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
