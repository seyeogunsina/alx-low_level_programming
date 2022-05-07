#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a duplicate of a string at a new memory location
 * @str: the string to be copied
 * Return: a pointer to the duplicated string. It returns NULL
 */

char *_strdup(char *str)
{
	char *strcpy;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	strcpy = malloc(sizeof(char) * (len + 1));

	if (strcpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		strcpy[i] = str[i];
	}
	strcpy[len] = '\0';
	return (strcpy);
}
