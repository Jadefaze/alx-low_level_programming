#include <stdio.h>
#include <stdlib.h>
/**
 * main - to print multiplication
 * arguments passed (after compile)
 * @argc: argument counter (int)
 * @argv: pointer to array of strings
 * Return: just 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
