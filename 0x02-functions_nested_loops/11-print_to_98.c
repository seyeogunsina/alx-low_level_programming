#include "main.h"

void print(int n);

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
		print(n);
		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

/**
 * print - prints an integer with putchar
 * @n: the integer input
 * Return: void
 */

void print(int n)
{
	if (n/10)
		print(n/10);
	_putchar(n % 10 + '0');
}
