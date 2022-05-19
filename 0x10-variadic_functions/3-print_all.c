#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints all inputs using a standard format
 * @format: the standard format list
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char formt[] = "cifs";
	char *str;
	unsigned int i = 0, j, k = 0;

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (formt[j])
		{
			if (format[i] == formt[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), k = 1;
				break;
			case 's':
				str = va_arg(ap, char *), k = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(ap);
}
