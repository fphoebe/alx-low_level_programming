#include <stdio.h>
/**
*main -a program that prints alphabet in lowercase
*
*Return: always 0
*/
int main (void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
