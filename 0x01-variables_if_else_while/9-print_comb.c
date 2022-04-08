#include <stdio.h>

/**
 * main - printss single digits integers
 * Return: number 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
