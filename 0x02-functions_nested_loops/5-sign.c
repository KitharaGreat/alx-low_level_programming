#include "main.h"
/**
 * print_sign - prints a sign with the return
 *
 * Return: what the +/_ of valeu 1 or -1
 *
 * @n: variable to be evaluated
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	else
		_putchar('-');
	return (-1);
}
