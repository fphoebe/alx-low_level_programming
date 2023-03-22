#include "main.h"
/**
 * main - Program that prints lowercase and  a new line
 * Return: Always 0
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
