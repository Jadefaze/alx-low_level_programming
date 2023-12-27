#include "main.h"

/**
 * _calloc - to allocate memory for an array
 * @nmemb: umber of elements
 * @size: size of member
 * Return: pointer to memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array_alloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array_alloc = (char *)malloc(size * nmemb);

	if (array_alloc == NULL)
		return (NULL);

	_memset(array_alloc, 0, size * nmemb);

	return (array_alloc);
}

/**
 * _memset - initialise memory area
 * @s: the pointer to memory area
 * @c: the value to inialise with
 * @n: size of memory area
 * Return: s
 */

void *_memset(char *s, char c, size_t n)
{
	size_t i;

	i = 0;

	for (i = 0; i < n; i++)
		s[i] = c;

	return (s);
}
