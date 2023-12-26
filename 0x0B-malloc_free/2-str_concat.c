#include "main.h"
/**
 * str_concat - to concatenate 2 strings
 * @s1: the first string
 * @s2: the second string
 * Return: point to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int len_s1, len_s2, len_s3, i, j;

	len_s1 = len_s2 = j = 0;
	if (s1 == NULL)
	{
		s1 = (char *)malloc(sizeof(char));
		s1 = "";
	}
	while (s1[len_s1] != '\0')
		len_s1++;
	if (s2 == NULL)
	{
		s2 = (char *)malloc(sizeof(char));
		s2 = "";
	}
	while (s2[len_s2] != '\0')
		len_s2++;
	len_s3 = len_s1 + len_s2;
	s3 = (char *)malloc(sizeof(char) * (len_s3 + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len_s3; i++)
	{
		if (i < len_s1)
			s3[i] = s1[i];
		else
		{
			s3[i] = s2[j];
			j++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
