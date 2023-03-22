#include "main.h"
/**
 *Description -prints 10 times the alphabet
 *return - always
  */
void print_alphabet_x10(void)
{
	int num;
	char lowercasealpha;

	for (num = 1; num <= 10; num++)
	{
		for (lowercasealpha = 'a'; lowercasealpha <= 'z'; lowercasealpha++)
		{
			_putchar (lowercasealpha);
		}
		_putchar('\n');
	}
}
