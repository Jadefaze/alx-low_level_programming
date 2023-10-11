#include <stdio.h>
#include "dog.h"

/**
 * print_dog - to print dog struct
 * @d: the pointer to dog struct
 * Return: Nothing (void)
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);

}
