#include "main.h"

/**
 * _realloc - to re - allocate a block of memory
 * @ptr: the pointer to previously allocated memory
 * @old_size: allocated bytes (size) for ptr
 * @new_size: new size in bytes to be allocated
 * Return: ptr or NULL (if it fails)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
