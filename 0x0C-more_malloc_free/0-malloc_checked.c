#include <stdlib.h>

/**
 * malloc_checked - to allocate memory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem_alloc;

	mem_alloc = malloc(b);

	if (mem_alloc == NULL)
		exit(98);

	return (mem_alloc);
}
