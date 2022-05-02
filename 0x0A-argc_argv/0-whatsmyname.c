#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: the number of command line arguments
 * @argv: an array of command line arguments
 */

int main(int argc, char *argv[])
{
	int i = argc - argc;
	printf("%s\n", argv[i]);
	return (0);
}
