#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d", argc);

	return (0);
}
