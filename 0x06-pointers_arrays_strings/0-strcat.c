#include "main.h"
/**
 * _strcat - concatenate 2 strings
 *
 * @dest: parameter to be joined to
 *
 * @src: the the one to be added
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int countdest = 0;
	int countsrc = 0;
	int a;

	for (a = 0 ; dest[a] != '\0'; a++)
		countdest++;
	for (a = 0 ; src[a] != '\0' ; a++)
		countsrc++;
	for (a = 0 ; a <= countsrc ; a++)
		dest[countdest + a] = src[a];
	return (dest);
}
