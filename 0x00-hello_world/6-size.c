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

	/* Sizeof evaluates  the size */
	printf("Size of char: %zu byte(s) \n", sizeof(a));
	printf("Size of int: %zu byte(s) \n", sizeof(b));
	printf("Size of long int: %zu byte(s) \n", sizeof(c));
	printf("Size of long long int: %zu byte(s) \n", sizeof(d));
	printf("Size of float: %zu byte(s) \n", sizeof(f));

	return (0);
}
