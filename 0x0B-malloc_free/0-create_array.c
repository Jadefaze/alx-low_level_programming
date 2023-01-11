#include <stdlib.h>
/**
 * create_array - crate char array
 * @size: array size
 * @c: char to initialize array with
 * Return: a;
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
