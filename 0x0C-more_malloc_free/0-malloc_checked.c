#include "main.h"

/**
 * malloc_checked - to allocate memory using malloc
 * @b: bytes required (to be allocated for)
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem_alloc;

	mem_alloc = malloc(b);

	if (!mem_alloc)
		exit(98);
	return (mem_alloc);
}
