#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all its arguments
 * @n: the number of arguments
 * Return: the sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, tot = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		tot += va_arg(ap, int);
	}
	va_end(ap);

	return (tot);
}
