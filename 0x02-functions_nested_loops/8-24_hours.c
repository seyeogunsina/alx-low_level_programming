#include "main.h"

void print(int n);
/**
 * jack_bauer - prints every minutes of the day
 * returns: void
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar('0' + i);
			}
			else if (i >= 10)
			{
				print(i);
			}
			_putchar(':');
			if (j < 10)
			{
				_putchar('0');
				_putchar('0' + j);
			}
			else if (j >= 10)
			{
				print(j);
			}
			_putchar('\n');
		}
	}
}

/**
 * print - prints an integer
 * @n: input integer to be printed
 * Return: void
 */

void print(int n)
{
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}
