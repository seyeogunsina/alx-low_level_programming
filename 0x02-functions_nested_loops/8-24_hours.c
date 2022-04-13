#include "main.h"

void print(int n);
/**
 * jack_bauer - prints every minutes of the day
 * returns: void
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			print(i);
			_putchar(':');
			print(j);
			_putchar('\n');
		}
	}
}

void print(int n)
{
	if (n/10)
		print(n/10);
	_putchar(n%10 + '0');
}
