#include "function_pointers.h"

/**
 * array_iterator - func to take in a function to operate on array elements
 * @array: the array to operate on
 * @size: number of elements in the array
 * @action: the function to operate on the array (pointer to)
 * Return: nothing (void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
