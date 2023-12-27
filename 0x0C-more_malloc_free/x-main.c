#include "main.h"
#include <stdio.h>

/**
 * main: to test string func
 * Return: 0
 */

int main(void)
{
	char *str, *str2;

	str = "Jadefaze";
	str2 = "";

	printf("The length of the string is: %d\n", _str_len(str));
	printf("The length of the string is: %d\n", _str_len(str2));

	return (0);
}

/**
 * _str_len - find string length
 * @str: the string
 * Return: the length
 */

unsigned int _str_len(char *str)
{
        unsigned int i;
	
	i = 0;

        while (str[i] != '\0')
                i++;
        return (i);
}

