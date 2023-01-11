#include <stdlib.h>
/**
 * str_concat - the func
 * @s1: input string 1
 * @s2: input string 2
 * Return: concat str or NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0;
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*find str len*/
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	/* +1  for our eos char*/
	s = malloc((a * sizeof(char)) + ((b + 1) * sizeof(char)));

	if (s == NULL)
		return (NULL);

	/*add first str to array*/
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	/* add second str to array s*/
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	/*null terminate our new string*/
	s[i] = '\0';

	return (s);
}
