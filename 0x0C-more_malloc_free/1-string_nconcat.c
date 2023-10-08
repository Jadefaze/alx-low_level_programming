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
	unsigned int i, j, len_s1, len_s2, len_total;

	i = j = len_s1 = len_s2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	if (n >= len_s2)
		n = len_s2;

	len_total = len_s1 + n;
	new_str = (char *)malloc(len_total + 1);

	if (new_str == NULL)
		return (NULL);
	for (; i < len_s1; i++)
		new_str[i] = s1[i];
	for (; j < n; j++)
		new_str[len_s1 + j] = s2[j];
	new_str[len_total] = '\0';
	return (new_str);
}
