#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the first n elements of an array
 * @a: the array input
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
	printf("\n");
}
