#include "main.h"
/**
 * _abs - function print absolute val ie. positive
 *
 * @a: value to be changed to absolut
 *
 * Return: we return a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if  (a >= 0)
		a = a;
	return (a);
}
