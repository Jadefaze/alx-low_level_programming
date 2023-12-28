#include "main.h"

/**
 * array_range - to create an array of integers
 * @min: lowest int in the range of values
 * @max: highest value in the range
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *array_int;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array_int = (int *)malloc(sizeof(int) * size);

	if (array_int == NULL)
		return (NULL);

	/* fill array */
	for (i = 0; i < size; i++)
	{
		array_int[i] = min;
		min++;
	}

	return (array_int);
}
