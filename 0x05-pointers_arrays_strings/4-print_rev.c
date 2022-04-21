#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string input
 */

void print_rev(char *s)
{
	int len;

	len = 0;

	while (*(s + len) != '\0')
		len++;
	
	len = len - 1;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
