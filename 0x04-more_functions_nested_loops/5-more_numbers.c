#include "main.h"

void print(int n);

/**
 * more_numbers - prints 10 lines of numbers 1 - 14
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
			print(j);
		_putchar('\n');
	}
}

/**
 * print - prints the number n
 * @n: the imput integer
 * Return: void
 */

void print(int n)
{
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}
