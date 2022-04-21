#include "main.h"

/**
 * _puts - prints the contents of a string
 * @str: the string input
 */

void _puts(char *str)
{
	int len;

	len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
}
