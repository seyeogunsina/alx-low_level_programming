#include <stdio.h>

/**
 * main - prints all single digit numbers
 * Return: number 0
 */

int main(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
