#include <stdlib.h>
#include <time.h>
/* more headers goes there */
 #include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this pushes the +/- of any random number
 *
 * Return: gives us value
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		prrintf("%lu is positive", n);
	else if (n == 0)
		printf("%lu is zero", n);
	else
		printf("%lu is negative", n);
	return (0);
}
