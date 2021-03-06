#include "main.h"

void print (int n);
/**
 * times_table - prints out the 9 times table
 */

void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (result < 10 && j > 0)
				_putchar(' ');
			print(result);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * print - prints an integer an
 * @n: the integer input
 * Return: void
 */

void print (int n)
{
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}
