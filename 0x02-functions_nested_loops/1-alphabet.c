#include "main.h"
/***
  *main -entry point
  * print_alphabet - function prints alphabets in lowercase
  *return -always 0
  */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; i++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
