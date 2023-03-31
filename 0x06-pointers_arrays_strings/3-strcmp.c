#include "main.h"
/**
 * _strcmp - function to compare
 *
 * @s1: 1st para to be compared
 * @s2: 2nd para to be compared
 * Return: +tive ot -tive if  >or<
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
		return (s1[i] - s2[i]);
		}
		else
		{
		return (0);
		}
	}
	return(0);
}
