#include <stdio.h>

/**
 * main - Prints small aplhabets using putchar
 * Return: Returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
