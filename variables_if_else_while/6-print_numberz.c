#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 *	only using putchar and without char variable.
 *
 * Return: Alwas 0.
 */
int main(void)
{
	int nbr;

	for (nbr = 0; nbr < 10; nbr++)
		putchar((nbr % 10) + '0');

	putchar('\n');

	return (0);
}
