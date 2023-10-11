#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - to free dog struct from memory
 * @d: pointer to the struct
 * Return: nothing (void)
 */

void free_dog(dog_t *d)
{
	free(d);
	d->name = NULL;
	d->owner = NULL;
}
