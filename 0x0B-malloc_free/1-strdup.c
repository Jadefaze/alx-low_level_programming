#include "main.h"

/**
 * _strdup - duplicate string
 * @str: string to duplicate
 * Return: pointer to new string (duplicate)
 */

char *_strdup(char *str)
{
	char *dup_str;
	int len_str, i;

	if (str == NULL)
		return (NULL);

	/* string length, needed for memory alloc */
	len_str = 0;
	while (str[len_str] != '\0')
		len_str++;

	/*mem allo */
	dup_str = (char *)malloc(sizeof(char) * (len_str + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < len_str; i++)
		dup_str[i] = str[i];
	dup_str[i] = '\0';

	return (dup_str);

}
