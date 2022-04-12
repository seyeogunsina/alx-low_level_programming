#include <stdio.h>
#include <string.h>

void print_sign(int n);

/**
 * print_sign - a function that prints the sign of a number
 * @n: parameter input
 * Return: 1 for positive, -1 for negative, and 0 for 0
 */

void print_sign(int n)
{
	if (n > 0)
	{
		returns (1);
		putchar('+');
	}
	else if (n < 0)
	{
		returns (0-1);
		putchar('-');
	}
	else
	{
		returns (0);
		putchar('0');
	}
}
