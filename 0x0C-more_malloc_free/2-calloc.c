#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  a function that allocates memory for an array, using malloc
 * @nmemb: the number of elements of the array
 * @size: the size of ech element
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * nmemb * size);

	if (ptr == NULL)
		return (NULL);

	while (ptr[i])
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
