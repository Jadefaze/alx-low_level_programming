#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - to initialise dog struct
 * @d: pointer to dog struct in memory
 * @name: name to give dog
 * @age: age of the dog
 * @owner: name of owner
 * Return: nothing (void);
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		free(d);
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
