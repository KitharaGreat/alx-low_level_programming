#include "main.h"
/**
 * _strlen_recursion - function to recursively find length of string
 * @s: parameter string
 * Return: 0 when done
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
