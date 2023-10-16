#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 *
 * Return - Always 0.
 */
int main(void)
{
	int nbr;

	for (nbr = 0; nbr < 10; nbr++)
		printf("%d", nbr);

	printf("\n");

	return (0);
}
