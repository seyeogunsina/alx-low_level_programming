#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - the main function used to print the result of the operation
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 or th error code
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		prinf("Error\n");
		exit(98);
	}

	if (strcmp(argv[2], "+") &&
			strcmp(argv[2], "-") &&
			strcmp(argv[2], "*") &&
			strcmp(argv[2], "/") &&
			strcmp(argv[2], "%"))
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
			atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[2])));

	return (0);
}
