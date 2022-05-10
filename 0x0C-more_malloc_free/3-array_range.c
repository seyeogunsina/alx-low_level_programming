#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: the minimum value in the array
 * @max: the maximum value in the array
 * Return: a pointer to the array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
		return (NULL);

	l = max - min + 1;
	ptr = malloc(sizeof(int) * l);

	if (ptr == NULL)
		return (NULL);

	j = 0;
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}

	return (ptr);
}
