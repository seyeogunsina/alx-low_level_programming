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
		if (i < 10)
		{
			putchar('0');
			putchar('0' + i);
		}
		else
		{
			putchar('0' + i);
		}
		
		putchar(':');

		for (j = 0; j < 60; j++)
		{
			if (j < 10)
			{
				putchar('0');
				putchar('0' + j);
			}
			else
			{
				putchar('0' + j);
			}

			putchar('\n');
		}
	}
}
