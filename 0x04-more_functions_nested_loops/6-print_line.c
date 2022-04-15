#include "main.h"

/**
 * print_line - a function that prints a straight line
 * @n: The number of times the character '_' is printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
