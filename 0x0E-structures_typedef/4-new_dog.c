#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - the function to create a new dog
 * @name: name of dog
 * @age: the age of dog
 * @owner: name of owner
 * Return: pointer to new dog in memory
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
