#include <stdio.h>
/**
 * main - to print number of arguments passed (after compile)
 * @argc: argument counter (int)
 * @argv: pointer to array of strings
 * Return: just 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc);
	(void)argv;
	return (0);
}
