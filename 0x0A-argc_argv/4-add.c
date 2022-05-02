#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - return the sum of arguments
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: an integer
 */

int main(int argc, char *argv[])
{
	int res, i;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	for (i = 0; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			res += argv[i];
		}
	}

	printf("%d\n", res);
	return (0);
}
