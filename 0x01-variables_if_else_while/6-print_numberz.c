#include <stdio.h>

/**
 * main - prints all single character numbers
 * Return: number 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar((char) i);

	putchar('\n');
	
	return (0);
}
