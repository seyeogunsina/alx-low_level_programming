#include "main.h"

/**
 * print_to_98 - prints number from n to 98
 * @n: input integer number
 * Return: void
 */

void print_to_98(int n)
{
	int i;
	for (i = n; i <= 98; i++)
	{
		_putchar(i);
		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
