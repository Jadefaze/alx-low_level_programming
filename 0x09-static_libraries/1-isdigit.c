/**
 * _isdigit - the function
 *
 * Description: to check for a digit (0 thru 9)
 * @c: parameter
 *
 * Return: Always 0(success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}


