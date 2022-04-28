#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the input string
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	else
	{
		_puts_recursion(s[i]);
		i++;
	}
}
