#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the pointer to the name
 * @f: the pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
