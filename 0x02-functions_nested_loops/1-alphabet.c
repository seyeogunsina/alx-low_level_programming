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
	char alphabets[27];
	int len;
	int i;

	alphabets = [a..z];
	len = strlen(alphabets);

	for (i = 0; i < len; i++)
	{
		_putchar(alphabets[i]);
	}

	putchar('\n');
}
