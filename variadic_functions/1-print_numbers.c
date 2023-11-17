#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index;

	/* Initialiser la liste d'arguments variables  */
	va_start(numbers, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbers, int));

		/**
		 * Si ce n'est pas le dernier nombre et que le séparateur
		 * n'est pas NULL, imprimer le séparateur
		 */
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	/* Terminer l'utilisation de la liste d'arguments variables */
	va_end(numbers);
}
