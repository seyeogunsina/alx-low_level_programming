#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory space
 * @ptr: the pointer to the memory space
 * @old_size: the size of the old memory space
 * @new_size: the newly allocated memory size
 * Return: a pointer to the new memory space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_new;
	unsigned int i, max = new_size;
	char *ptr_old = ptr;

	if (ptr == NULL)
	{
		ptr_new = malloc(new_size);
		return (ptr_new);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	ptr_new = malloc(new_size);
	if (ptr_new == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		ptr_new[i] = ptr_old[i];

	free(ptr);
	return (ptr_new);
}
