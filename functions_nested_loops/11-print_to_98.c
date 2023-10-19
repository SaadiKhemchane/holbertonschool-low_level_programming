#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	for (; n < 98 ; n++)
		printf("%d, ", n);
	for (; n > 98 ; n--)
		printf("%d, ", n);
	printf("%d\n", n);
}
