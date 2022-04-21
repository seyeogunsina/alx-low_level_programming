#include "main.h"

/**
 * puts_half - prints half of string
 * @str: the string input
 */

void puts_half(char *str)
{
	int i, l, n;

	l = 0;
	i = 0;

	while (*(str + l) != '\0')
		l++;

	l--;
	if (l % 2 == 0)
		n = l / 2;
	else
		n = (l - 1) / 2;

	while (n <= l)
	{
		_putchar(*(str + n + 1));
		n++;
	}
	_putchar('\n');
}
