#include <stdio.h>
#include <string.h>

int _abs(int);

/**
 * _abs - returns the absolute value
 * @n: receives  a parameter input
 * Return: the absolute value
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
