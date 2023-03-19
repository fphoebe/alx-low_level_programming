#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
  * main -entry point
iiiiiiiiii  *
  * Return: Always 0 (success)
  */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("last digit of %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("last digit of  and is zero\n", n);
	}
	else
		(n < 6 && n != 0)
	{
		printf("last digit of %d and is less than 6 and 0");
	}
	return (0);
}

