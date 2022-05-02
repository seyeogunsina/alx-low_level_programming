#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination memory area
 * @src: source memory area
 * @n: the number of bytes to be copied
 * Return: a pointer to the start of the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
