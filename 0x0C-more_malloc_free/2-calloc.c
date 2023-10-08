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
	size_t i, total_size;
	char *zero_byte;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = size * nmemb;

	array_alloc = malloc(total_size);

	if (array_alloc == NULL)
		return (NULL);

	zero_byte = array_alloc;
	while (i < total_size)
	{
		*(zero_byte + i) = 0;
		i++;
	}

	return (array_alloc);
}
