#include "main.h"

/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: the input string
 * @c: the character to be searched for
 * Return: the address of the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
