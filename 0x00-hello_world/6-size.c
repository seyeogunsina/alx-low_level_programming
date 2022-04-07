#include <stdio.h>

/**
 * main - A function that displays the sizes of characters
 * Return: It returns the integer 0
 */
int main(void)
{
	int i;
	double d;
	char c;

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of an double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of an c is: %lu.\n", (unsigned long)sizeof(c));

	return (0);
}
