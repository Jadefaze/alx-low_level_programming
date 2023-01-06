/**
 * _strstr - the func
 * @haystack: input str
 * @needle: substr to search for
 *
 * Return: pointer to found str
 */
char *_strstr(char *haystack, char *needle)
{
	/**
	 * we initialise our helping variables
	 * to assist in returning one of our params
	 */
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
