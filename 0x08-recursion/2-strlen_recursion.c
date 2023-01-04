/**
 * _strlen_recursion - to return string length
 * @s: takes in apointer to a string
 *
 * Return: the int number of chars in string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);

}


