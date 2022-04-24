#include "main.h"

/**
 * reverse_array - reverses an input array
 * @a: the input array
 * @n: the number of characters to be reversed
 */

void reverse_array(int *a, int n)
{
	char str[];
	int i = 0;

	while (n <= 0)
	{
		str[i] = a[n];
		i++;
		n--;
	}

	while (n < i)
	{
		*(a + n) = str[n];
		n++;
	}
}
