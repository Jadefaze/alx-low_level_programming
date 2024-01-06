#include "function_pointers.h"

/**
 * print_name - to print a name (a person for example)
 * @name: the name (of the person)
 * @f: pointer to function
 * Return: Nothing (void)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
