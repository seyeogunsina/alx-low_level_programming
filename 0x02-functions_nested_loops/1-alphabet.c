#include <stdio.h>
#include <string.h>

void print_alphabet(void);

/**
 * main - prints alphabets in lowercase
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - 
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a';ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
}
