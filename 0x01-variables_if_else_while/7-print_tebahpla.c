#include <stdio.h>

/**
 * main - prints lower case letters in reverse
 * Return: number 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	return (0);
}
