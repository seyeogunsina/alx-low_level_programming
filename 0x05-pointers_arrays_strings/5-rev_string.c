#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the input string
 */

void rev_string(char *s)
{
	int len;

	len = 0;
	
	while (*(s + len) != '\0')
		len++;

	len--;
	for (; len >= 0; len--)
		_putchar(*(s + len));
	_putchar('\n');
}
