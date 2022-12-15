/**
 * _isupper - Entry point
 *
 * Description: 'To check whether character is upper'
 *
 *@c: character for testing
 *
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	int result; /* to store our result either 0 or 1 */

	if (c >= 'A' && c <= 'Z')
		result = 1;
	else
		result = 0;
	return (result);
}
