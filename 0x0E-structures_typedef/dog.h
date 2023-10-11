#ifndef DOG_H
#define DOG_H

/**
 * struct dog - to define a new type dog
 * @name: dog name
 * @age: dog name
 * @owner: name owner of dog
 * Description: Just a dog type
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*DOG_H*/
