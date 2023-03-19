#include <stdio.h>
/**
 * main - A program that prints all posible combination of single-digit numbers
 *
 * Return: always 0
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
