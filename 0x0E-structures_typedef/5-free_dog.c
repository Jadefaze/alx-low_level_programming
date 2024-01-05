#include "dog.h"

/**
 * free_dog - to free memory allocated to dog
 * @d: pointer to dog struct in memory
 * Return: Nothing (void)
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
