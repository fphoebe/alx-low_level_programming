#include "main.h"
/**
 *Description - print_alphabet
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

