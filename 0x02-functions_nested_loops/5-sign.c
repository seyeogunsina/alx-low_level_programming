#include <stdio.h>
#include <string.h>

int print_sign(int n);

/**
 * print_sign - a function that prints the sign of a number
 * @n: parameter input
 * Return: 1 for positive, -1 for negative, and 0 for 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (0-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
