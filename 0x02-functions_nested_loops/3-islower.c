#include <stdio.h>
#include <string.h>

int _islower(int c);

/**
 * _islower - checks for lower case characters
 * @c: the parameter to check for lowercase
 * Return: 1 if lowercase or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
