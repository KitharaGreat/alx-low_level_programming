#include "main.h"
/**
 * _isalpha - function to know if its an alpha
 *
 * @c: input to be evaluated
 *
 * Return: 1 if success 0 if failure
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
