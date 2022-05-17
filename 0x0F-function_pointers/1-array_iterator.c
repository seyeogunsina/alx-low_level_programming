#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on an array
 * @array: the array input
 * @size: the array size
 * @action: the function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(*(array + i));
	}
}
