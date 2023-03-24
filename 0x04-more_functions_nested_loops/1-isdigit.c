#include "main.h"
/**
 * _isdigit - check if a digit
 *
 * @c: parameter
 * Return: 1 for success, 0 for not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
