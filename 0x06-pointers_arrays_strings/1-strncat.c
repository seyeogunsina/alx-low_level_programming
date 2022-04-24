#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * @n: the number of bytes from src
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a] != 0)
		a++;

	b = 0;

	while (src[b] != 0 && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
