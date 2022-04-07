#include <stdio.h>

/**
 * main - A function that displays the sizes of characters
 * Return: It returns the integer 0
 */
int main(void)
{
	int i;
	float f;
	char c;
	long int lu;
	long long int llu;


	printf("Size of a char: %c byte(s)\n", (unsigned char)sizeof(c));
	printf("Size of an int: %d byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lu));
	printf("Size of a long long int: %llu byte(s)\n", (unsigned long long)sizeof(llu));
	printf("Size of a float: %f byte(s)\n", (float)sizeof(f));

	return (0);
}
