#include <stdio.h>
/**
 * main - this is a program to print all arguments passed
 * @argc: argc paramreter
 * @argv: an array of a command listed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
