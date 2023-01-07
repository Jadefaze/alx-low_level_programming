#include <stdio.h>
/**
 * main - to print number of arguments passed (after compile)
 * @argc: argument counter (int)
 * @argv: pointer to array of strings
 * Return: just 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
