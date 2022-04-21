#include "main.h"

/**
 * _strlen - returns the length of string
 * @s - the input string
 * Return: the string length
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	
	while (*(s + len) != '\0')
		len++;

	return (len);
}
