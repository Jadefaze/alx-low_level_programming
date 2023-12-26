#include "main.h"

/**
 * create_array - create an array of chars with a specif char
 * @size: size of array to create
 * @c: the char to initialize array with
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *char_array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	char_array = (char *)malloc(sizeof(char) * size);

	if (char_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		char_array[i] = c;

	return (char_array);
}
