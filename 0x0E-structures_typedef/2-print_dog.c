#include "dog.h"
#include <stdio.h>

/**
 * print_dog - to print dog struct
 * @d: pointer to the dog in memory
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		free(d);
		return;
	}

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	if (!(d->age))
		printf("Age: %s\n", "(nil)");
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
