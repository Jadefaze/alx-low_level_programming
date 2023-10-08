#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s to copy
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, j, len_s1, len_s2;

	i = j = len_s1 = len_s2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	new_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (new_str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	if (n >= len_s2)
		n = len_s2;
	while (j < n)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
