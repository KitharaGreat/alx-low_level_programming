#include "main.h"
/**
 * print_last_digit - function that prints last digit regardless of sign
 *
 * @a: function parameter
 *
 * Return: return value of a
 */
int print_last_digit(int a)
{
	int k;

	k = a % 10;
	if (a < 0)
		k = -(k);
	return (k);
}
