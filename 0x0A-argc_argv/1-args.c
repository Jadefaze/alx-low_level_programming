#include "main.h"

/**
 * main -  to print number of args passed
 * @argc: the number of args passed(command line args)
 * @argv: argument vector
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
