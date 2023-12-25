#include "main.h"

/**
 * main -  to print args passed including argv[0]
 * @argc: the number of args passed(command line args)
 * @argv: argument vector
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
