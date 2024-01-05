#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct dog - to define a dog struct
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
