/**
 * _strlen - this is to find string length
 * @s: takes in a char pointer
 *
 * Return: the size of the char string
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; *s != '\0'; s++)
		++i;
	return (i);
}
