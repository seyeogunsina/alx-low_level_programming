#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: receives parameter n
 * Returns: the last digit value *
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -1 * n;

	last_digit = n % 10;
	putchar('0' + last_digit);

	return (last_digit);
}
