#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - to perform simple calc
 * @argc: argument counter
 * @argv: array of args passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		return (0);
	}


	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = get_op_func(argv[2])(a, b);

	if (!result)
	{
		printf("%s\n", "Error");
		return (0);
	}

	printf("%d\n", result);
	return (0);
}
