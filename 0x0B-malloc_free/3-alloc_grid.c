#include "main.h"

/**
 * alloc_grid - create 2d array
 * @width: size (columns)
 * @height: szie (rows)
 * Return: point to the array
 */

int **alloc_grid(int width, int height)
{
	int **array_2d;
	int i;

	if (height <= 0 || width <= 0)
		return (NULL);

	array_2d = (int **)malloc(sizeof(int) * height);

	if (array_2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array_2d[i] = (int *)malloc(sizeof(int) * width);
		if (array_2d[i] == NULL)
			return (NULL);
	}

	return (array_2d);
}
