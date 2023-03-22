#include "main.h"
/***
  *main -entry point
  * print_alphabet - function prints alphabets in lowercase
  *return -always 0
  */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		-putchar(i);
	}
	-putchar('\n');
