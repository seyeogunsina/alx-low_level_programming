#include "main.h"

/**
 * sqrt_a -  recursively calculates the natural square root of a
 * @a: the base integer
 * @b: the square root
 * Return: the square root
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	else
	{
		return (sqrt_a(a, b + 1));
	}
}

/**
 * _sqrt_recursion - the main square root function
 * @n: the integer input
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
