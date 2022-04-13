#include <limits.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: receives parameter n
 * Return: the last digit value *
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n *= -1;

	if (n == INT_MIN)
	{
		last_digit = 8;
		_putchar(last_digit + '0');
		return (last_digit);
	}

	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
