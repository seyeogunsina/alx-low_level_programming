#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: the destination strings
 * @src: the source string
 * Return: returns a pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	i = 0;

	while (*(dest + len) != '\0')
		len++;

	len--;
	while (*(src + i) != '\0')
	{
		*(dest + len) = *(src + i);
		len++;
		i++;
	}
	*(dest + len) = '\0';

	return (dest);
}
