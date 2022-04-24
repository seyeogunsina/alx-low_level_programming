#include "main.h"

/**
 * _strncpy - copy the string src into dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of characters to be copied
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != 0 && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
