#include "main.h"

/**
 * *_strcpy - copies the content of a string to another
 * @src: the soruce string
 * @dest: the destination string
 * Return: the pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int l;

	l = 0;

	while (*(src + l) != '\0')
	{
		*(dest + l) = *(src + l);
		l++;
	}
	*(dest + l) = '\0';

	return (dest);
}
