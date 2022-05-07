#include "main.h"
#include <stdlib.h>

/**
 * str_len - used to calculate the length of a string
 * @str: the input string
 * Return: an integer
 */

int str_len(char *str)
{
	int l = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the concatenated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str_cat;
	unsigned int len, len1, len2, i, j;

	len1 = str_len(s1);
	len2 = str_len(s2);

	len = len1 + len2;

	str_cat = malloc(sizeof(char) * (len + 1));

	if (str_cat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		str_cat[i] = s1[i];
	}

	j = 0;
	for (i = len1; i < len; i++)
	{
		str_cat[i] = s2[j];
		j++;
	}

	str_cat[len] = '\0';
	return (str_cat);
}
