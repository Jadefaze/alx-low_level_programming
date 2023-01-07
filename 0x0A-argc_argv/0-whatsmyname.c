#include <stdio.h>
/**
 * main - to print its name (after compile)
 *		i.e after the -o flag
 * @argc: argument counter (int)
 * @argv: pointer to array of strings
 * Return: just 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
