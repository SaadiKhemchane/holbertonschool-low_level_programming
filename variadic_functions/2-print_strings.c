#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * 
 * @separator: The string to be printed between strings.
 * @n: number of arguements.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	/* Variable pour stocker chaque chaine */
	char *str;
	unsigned int index;

	/* Initialiser la liste d'arguements variable avec le nombre */
	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		/* Recuperer chaque chaine de la liste d'arguements  */
		str = va_arg(strings, char *);

		/* Si la chaine est NULL,imprime (nil),sinon imprime la chaine */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
