#include "main.h"

/**
 * binary_to_uint - converts a string of binary characters to integer
 * @b: the character string input
 * Return: the converted integer
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, exp_2;
	unsigned int res = 0;

	if (!b)
		return (0);
	
	while (b[len] != '\0')
	{
		len++;
	}

	for (len--, exp_2 = 1; len >= 0; len--, exp_2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == 1)
			res += exp_2;
	}
	return (res);
}
