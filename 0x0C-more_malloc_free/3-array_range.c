#include <stdlib.h>

/**
 * array_range - to create an arrray of int values
 * @min: lowest values
 * @max: highest value
 * Return: pointer to array of values
 */

int *array_range(int min, int max)
{
	int *array_ints;
	int array_size, i;

	if (min > max)
		return (NULL);

	array_size = max - min + 1;

	array_ints = malloc(sizeof(int) * array_size);

	if (array_ints == NULL)
		return (NULL);

	for (i = 0; i < array_size; i++)
	{
		array_ints[i] = min;
		min++;
	}
	return (array_ints);
}
