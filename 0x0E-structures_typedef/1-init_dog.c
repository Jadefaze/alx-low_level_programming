#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - to initialise the dog class/type
 * @d: the pointer to the dog structure in memory
 * @name: the name of the dog
 * @age: the age of dog
 * @owner: name of owner
 * Return: nothing (void)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
