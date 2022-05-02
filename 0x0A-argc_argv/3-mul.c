#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of 2 numbers
 * @argc: number of args
 * @argv: array of args
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
		return (0);
	}
}
