#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - the function that selects the correct function to perform
 * the operation asked by the user.
 * @s: operator chosen
 *
 * Return: right ope
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		/*
		 * check if the first character of op is the same of s
		 * and if s has only one characte
		 */
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
