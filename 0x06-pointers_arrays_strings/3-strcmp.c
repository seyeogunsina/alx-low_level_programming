#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second strings
 * Return: negative, 0, or positive integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && j == 0)
	{
		b = s1[i] - s2[j];
		i++;
	}
	return (j);
}
