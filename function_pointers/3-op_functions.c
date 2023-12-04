#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - add operator
 * @a: entier a
 * @b: entier b
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub operator
 * @a: entier a
 * @b: entier b
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul operator
 * @a: entier a
 * @b: entier b
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div operator
 * @a: entier a
 * @b: entier b
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod operator
 * @a: entier a
 * @b: entier b
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
