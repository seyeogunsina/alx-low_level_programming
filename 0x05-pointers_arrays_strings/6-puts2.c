#include "main.h"

/**
 * puts2 - prints every other charater of a string
 * @str: the string input
 */

void puts2(char *str)
{
	int l, i;

	l = 0;
	i = 0;

	while (*(str + l) != '\0')
		l++;
	l--;

	while (i <= l)
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
