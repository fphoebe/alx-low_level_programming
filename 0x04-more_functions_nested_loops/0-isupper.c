#include "main.h"
 /**
   *_isupper -check if a letter is upper
   *@x: the number to be checked
   *Return: 1 for the upper letter or 0 for any else
   */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
int _isupper(int n)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
