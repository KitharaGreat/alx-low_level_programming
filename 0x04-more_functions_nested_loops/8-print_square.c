#include "main.h"
/**
 * print_square - number for squeare lines
 *
 * @size: parameter
 * Return: void
 *
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;

		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
			}
			 _putchar('\n');
		}
	}
}
