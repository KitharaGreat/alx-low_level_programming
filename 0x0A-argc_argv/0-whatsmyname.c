#include <stdio.h>
/**
 * main - this is a program to print it's name
 * @argc: argc paramreter
 * @argv: an array of a command listed
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

