/**
 * _isdigit - checks if numbers are 0-9
 * @c: char to be checked.
 *
 * Return: 0 0r 1
 */
int _isdigit(int c)
{
	int c;

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
