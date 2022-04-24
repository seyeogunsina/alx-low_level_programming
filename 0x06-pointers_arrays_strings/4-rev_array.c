#include "main.h"

/**
 * reverse_array - reverses an input array
 * @a: the input array
 * @n: the number of characters to be reversed
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
