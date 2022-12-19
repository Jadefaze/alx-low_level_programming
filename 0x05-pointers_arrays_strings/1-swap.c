/**
 * swamp_int - to interchange two ints
 * @a: the first integer
 * @b: the second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
