#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints from 1 to 100
 * Return: 0
 */

int main(void)
{
	char str1[] = "Fizz";
	char str2[] = "Buzz";
	char str3[] = "FizzBuzz";
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s", str3);
			putchar(' ');
		}
		else if (i % 3 == 0)
		{
			printf("%s", str1);
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf("%s", str2);
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
