/**
 * rev_string - reverse a string just
 * @s: parameter
 *
 * return: void
 */
void rev_string(char *s)
{
	int len, i;
	char ch;

	for (len = 0; s[len] != '\0'; ++len)
		;
	for (i = 0; i < len / 2; ++i)
	{
		ch = s[i];
		s[i] = s[len - 1 - i]; /*array strings start at 0*/
		s[len - 1 - i] = ch;
	}
}
