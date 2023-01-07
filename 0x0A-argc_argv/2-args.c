#include <stdio.h>
/**
 * main - to print arguments passed (after compile)
 * @argc: argument counter (int)
 * @argv: pointer to array of strings
 * Return: just 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= (argc - 1); i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
