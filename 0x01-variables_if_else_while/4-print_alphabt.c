#include <stdio.h>

/**
 * main - to exclude ssome alphabets, e and q
 *
 *Return: it gives back 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar(i);
	return (0);
}
