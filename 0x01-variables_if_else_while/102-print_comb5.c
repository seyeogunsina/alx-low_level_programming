#include <stdio.h>
#include <string.h>

/**
 * main - prints all combinations of 2 digits
 * Return: number 0
 */

int main(void)
{
	int i;
	int j;
	int m;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (m = 0; m <= 9; m++)
			{
				for (n = 1; n <= 9; n++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(m + '0');
					putchar(n + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
