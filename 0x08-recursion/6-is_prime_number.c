#include "main.h"

/**
 * prime_test - used to test for prime recursively
 * @a: the number to be checked
 * @b: the counter
 * Return: 1 if prime, 0 otherwise
 */

int prime_test(int a, int b)
{
	if (a == 1 || b == a)
	{
		return (1);
	}
	else if (b != 1 && b != a)
	{
		if (a % b == 0)
			return (0);
		else
		{
			return (prime_test(a, b + 1));
		}
	}
}

/**
 * is_prime_number -  checks for prime number
 * @n: the number input
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime_test(n, 1));
}
