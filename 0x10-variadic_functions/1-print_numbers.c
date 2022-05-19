#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints a list of numbers
 * @separator: separators to be printed between numbers
 * @n: the number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int arg;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(ap, int);
		printf("%d", arg);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
