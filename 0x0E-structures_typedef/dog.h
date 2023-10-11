#ifndef DOG_H
#define DOG_H

/**
 * struct dog - to define a new type dog
 * @name: dog name
 * @age: dog name
 * @owner: name owner of dog
 * Description: Just a dog type
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG_H*/
