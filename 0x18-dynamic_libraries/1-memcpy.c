#include "main.h"

/**
 * _memcpy - to fill memory with a constant byte
 *
 * @dest: pointer to destination memory area
 * @src: the pointer to source memory area
 * @n: number of bytes to copy;
 *
 * Return: pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
