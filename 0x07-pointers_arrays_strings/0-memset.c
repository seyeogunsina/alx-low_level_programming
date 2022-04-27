#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: the pointer to the memory location
 * @b: the character to be used to fill the memory
 * @n: the number of bytes to be filled
 * Return: a pointer to the memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
	}
	return (s);
}
