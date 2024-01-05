#include "dog.h"
#include <string.h>

/**
 * new_dog - to create a new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of owner
 * Return: new_dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = name;

	dog->age = age;

	dog->owner = owner;

	return (dog);
}
