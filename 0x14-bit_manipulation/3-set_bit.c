#include "main.h"

/**
 * set_bit - sets the bit at a given index to 1
 * @n: the input integer
 * @index: the target index
 * Return: 1 if succesful, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n ^ (1 << index);

	return (1);
}
