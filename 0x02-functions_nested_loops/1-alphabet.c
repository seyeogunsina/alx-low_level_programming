#include <stdio.h>
#include <string.h>

void print_alphabet(void);

/**
 * print_alphabet - prints lowercase alphabets
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
}
