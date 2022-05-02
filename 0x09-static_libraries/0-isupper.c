#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: the input character
 * Return: 1 if uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
