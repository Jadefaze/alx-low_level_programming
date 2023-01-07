#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * isNum - check for positive number
 * @num: string to check
 * Return: 0 if its a a number, 1 otherwise
 */
int isNum(char num[])
{
	int i, l = strlen(num);

	for (i = 0; i < l; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}
	return (0);
}

/**
 * main - to print sum of all
 * arguments passed (after compile)
 * @argc: argument counter (int)
 * @argv: pointer to array of strings
 * Return: just 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int result, i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		result = 0;
		for (i = 1; i <= (argc - 1); i++)
		{
			if (isNum(argv[i]) == 0)
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
