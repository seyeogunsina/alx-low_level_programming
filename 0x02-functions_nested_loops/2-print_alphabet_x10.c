#include <stdio.h>
#include <string.h>

void print_alphabet_x10(void);

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; 1++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
