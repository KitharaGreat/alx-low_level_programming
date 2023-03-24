#include "main.h"
/**
 * _isupper - is upper or lower cas
 * @c: parameter
 * Return: whatever c is
 *
 */
int _isupper(int c)
{
	if (c >= 64 && c <= 89)
		printf("%d: 1", c);
	else if (c >= 97 && c <= 122)
		printf("%d: 0", c);
	return (c);
}
