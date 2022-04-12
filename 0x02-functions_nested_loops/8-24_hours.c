#include <stdio.h>

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
			if (i < 10)
			{
				putchar('0');
				putchar('0' + i);
			}
			else
			{
				if (i/10)
					print(i/10);
				putchar(i % 10 + '0');
			}
			putchar(':');
			if (j < 10)
			{
				putchar('0');
				putchar('0' + j);
			}
			else
			{
				if (j/10)
					print(j/10);
				putchar(j % 10 + '0');
			}

			putchar('\n');
		}
	}
}
