#include "main.h"

/**
 * _isdigit - checks if an input is a digit between 0 and 9
 * @c: the input character
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
