#include <stdio.h>
#include <string.h>

/**
 * main - a function that prints a string
 * Return: number 1
 */

int main(void)
{
	char st[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;
	int len = strlen(st);

	for (i = 0; i < len; i++)
	{
		putchar(st[i]);
	}
	putchar('\n');

	return (0);
}
