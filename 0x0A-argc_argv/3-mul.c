#include "main.h"

/**
 * main -  to two args passed
 * @argc: the number of args passed(command line args)
 * @argv: argument vector
 * Return: 0 for success, else -1
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (-1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", product);

	return (0);
}
