#include "main.h"

/**
 * _calloc - to allocate memory for an array
 * @nmemb: umber of elements
 * @size: size of member
 * Return: pointer to memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *array_alloc;
	char *charPtr;

	i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array_alloc = malloc(size * nmemb);
	charPtr = (char *)array_alloc;

	if (array_alloc == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		charPtr[i] = 0;

	return (array_alloc);
}
