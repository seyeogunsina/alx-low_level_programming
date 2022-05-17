#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds 2 integers
 * @a: first integer
 * @b: second integer
 * Return: sum of the 2 integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts b from a
 * @a: the first integer
 * @b: the second integer
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 integers
 * @a: first integer
 * @b: second integer
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - integer division of a by b
 * @a: the numerator
 * @b: the denominator
 * Return: the result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulo division of a by b
 * @a: the numerator
 * @b: the denominator
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
