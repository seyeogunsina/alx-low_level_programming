#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: the number of times the character '\' is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (i > 1)
			{
				for (j = 1; j < i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
