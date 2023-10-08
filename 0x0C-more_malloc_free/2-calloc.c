#include <stdlib.h>

/**
 * _calloc - to allocate memory for an array
 * @nmemb: number of elements in array
 * @size: size in bytes of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array_alloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array_alloc = malloc(size * nmemb);

	if (array_alloc == NULL)
		return (NULL);
	return (array_alloc);
}
