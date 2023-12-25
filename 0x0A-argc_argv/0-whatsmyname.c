#include "main.h"

/**
 * main -  to print program name (the program which calls it)
 * @argc: the number of args passed(command line args)
 * @argv: argument vector
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
