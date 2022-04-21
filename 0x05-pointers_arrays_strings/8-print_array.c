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
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
