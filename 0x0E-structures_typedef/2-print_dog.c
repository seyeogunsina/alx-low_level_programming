#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints the details of a dog
 * @d: the dog struct input
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->onwer == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
