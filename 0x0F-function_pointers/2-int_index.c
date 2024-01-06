#include "function_pointers.h"

/**
 * int_index - function to search for an integer
 * @array: the array with ints to search
 * @size: number of elements in the array
 * @cmp: function to do the comparison (any func passed)
 * Return: index of the first element found, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
