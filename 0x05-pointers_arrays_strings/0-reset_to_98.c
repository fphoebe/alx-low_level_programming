#include "main.h"
/**
  * reset_to_98 - a function that takes a pointer to an int as a parameter
  * and updates the value it points to to 98  *@n: input
  *Return: n
  */
void reset_to_98(int *n)
{
	int n;

	int *ip;

	ip = &n;

	*n = 98;
	_putchar('98')
}
