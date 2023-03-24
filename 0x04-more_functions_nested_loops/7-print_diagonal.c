#include "main.h"
/**
 * print_diagonal - draws diagonal
 * @n: parameter
 * Return: always 0
 *
 */
void print_diagonal(int n)
{
	if (n < 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0 ; i < n ; i++)
		{
			for (j = i ; j < i ; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
