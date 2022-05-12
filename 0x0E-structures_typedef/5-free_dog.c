#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory occupied by a dog object
 * @d: the dog object
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
