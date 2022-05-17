#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the array of elements
 * @size: the array size
 * @cmp: the function for searching for integers
 * Return: an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res != 0)
			return (i);
	}
	return (-1);
}
