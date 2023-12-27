#include "main.h"

/**
 * string_nconcat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2 to add to string 1
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, len_s3, j, i;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _str_len(s1);
	len_s2 = _str_len(s2);

	if (n >= len_s2)
		n = len_s2;
	len_s3 = len_s1 + n;

	s3 = (char *)malloc(sizeof(char) * (len_s3 + 1));

	if (s3 == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < len_s3; i++)
	{
		if (i >= len_s1)
		{
			s3[i] = s2[j];
			j++;
		}
		else
			s3[i] = s1[i];
	}
	s3[i] = '\0';

	return (s3);
}

/**
 * _str_len - find string length
 * @str: the string
 * Return: the length
 */

unsigned int _str_len(char *str)
{
	unsigned int i;

	while (str[i] != '\0')
		i++;
	return (i);
}

