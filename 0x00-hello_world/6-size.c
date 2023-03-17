#include<stdio.h>
/**
 *main - this declaration will take a number of arguments
 *printf: This func will output size
 *Return: Success is 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	print ("Size of char: %lu byte(s) \n", (unsigned long)sizeof(a));
	print ("Size of int: %lu byte(s) \n", (unsigned long)sizeof(b));
	print ("Size of long int: %lu byte(s) \n", (unsigned long)sizeof(c);
	print ("Size of long long int: %lu byte(s) \n", (unsigned long)sizeof(d));
	print ("Size of float: %lu byte(s) \n", (unsigned long)sizeof(f));

	return (0);
}
