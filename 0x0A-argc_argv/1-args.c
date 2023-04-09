#include <stdio.h>
/**
 * main - this is a program to prints the number of arguments
 * @argc: argc paramreter
 * @argv: an array of a command listed
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
