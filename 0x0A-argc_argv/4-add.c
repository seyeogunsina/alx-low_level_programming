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
	int res, i, count;

	count = 1;
	res = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[count]);
		count++;
	}
	printf("%d\n", res);
	return (0);
}
