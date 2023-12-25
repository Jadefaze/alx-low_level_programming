#include "main.h"

/**
 * main -  to add args passed
 * @argc: the number of args passed(command line args)
 * @argv: argument vector
 * Return: 0 for success, else -1
 */

int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i])) || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
