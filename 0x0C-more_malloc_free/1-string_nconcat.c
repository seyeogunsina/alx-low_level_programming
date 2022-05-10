#include "main.h"
#include <stdlib.h>

/**
 * str_len - returns the length of string
 * @str: the input string
 * Return: the length of the string
 */
int str_len(char *str)
{
	int l = 0;

	if (str == NULL)
		return (0);

	while (str[l] != '\0')
		l++;

	return (l);
}

/**
 * string_nconcat - concatenates the string s1 and s2
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to be taken fron s2
 * Return: the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, len, i, j;
	char *ptr;

	l1 = str_len(s1);
	l2 = str_len(s2);

	if (n >= l2)
		n = l2;

	ptr = malloc((sizeof(*s1) * l1) + (sizeof(*s2) * n));

	if (ptr == NULL)
		return (NULL);

	len = l1 + n;

	for (i = 0; i < l1; i++)
	{
		ptr[i] = s1[i];
	}

	j = 0;
	for (i = l1; i < len; i++)
	{
		ptr[i] = s2[j];
		j++;
	}

	ptr[len] = '\0';

	return (ptr);
}
