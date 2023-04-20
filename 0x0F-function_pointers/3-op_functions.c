#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a function
 * @a: param
 * @b:param
 * Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - a function that substract numbers
 * @a:param
 * @b: param
 * Return: 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function
 * @a: param
 * Return: 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function
 * @a: param
 * @b: param
 * Return: 0
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - a function
 * @a: parameter
 * @b: paramaeter
 * Return: 0
 */

int op_mod(int a, int b)
{
	return (a % b);
}
