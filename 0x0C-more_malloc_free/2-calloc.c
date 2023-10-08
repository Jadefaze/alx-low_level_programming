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
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = size * nmemb;

	array_alloc = malloc(total_size);

	if (array_alloc == NULL)
		return (NULL);

	while (i < total_size)
	{
		*((int *)array_alloc + i) = 0;
		i++;
	}

	return (array_alloc);
}
