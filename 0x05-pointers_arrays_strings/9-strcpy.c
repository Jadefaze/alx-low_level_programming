/**
 * _strcpy - cpoy string
 * @dest: destination of string
 * @src: source copy
 *
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len, count;

	len = 0;

	while (src[len] != '\0')
		len++;
	for (count = 0; count <= len; count++)
		dest[count] = src[count];
	return (dest);
}
