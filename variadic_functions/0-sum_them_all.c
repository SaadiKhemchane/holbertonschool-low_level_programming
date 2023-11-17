#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: The number of paramters passed to the function.
 *
 * Return: the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	/* Déclaration d'une liste d'arguments variables */
	va_list numbers;
	/* Déclaration d'une variable pour ctocker la somme */
	int sum;
	/* Déclaration d'une variable pour l'itération */
	unsigned int i;

	/* Si le nombre de paramètres est 0, retourner 0 */
	if (n == 0)
		return (0);

	sum = 0;
	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		/* Ajouter chaque paramètre à la somme en utilisant va_arg */
		sum += va_arg(numbers, int);
	}

	va_end(numbers);

	return (sum);
}
