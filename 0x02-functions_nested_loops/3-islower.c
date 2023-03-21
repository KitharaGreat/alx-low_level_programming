#include "main.h"
/**
 *  _islower - function to find if lower case
 *
 * @c: parameter to be evaluated
 *
 * Return: 1 if successful 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
