#include "main.h"

/**
 * print_triangle - prints a triangle with character '#'
 * @size: the traingle size
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			if (i < size)
			{
				for (j = size - i; j > 0; j--)
				{
					_putchar(' ');
				}
				for (j = size - i; j < size; j++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
			else if (i == size)
			{
				for (j = 0; j < size; j++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
