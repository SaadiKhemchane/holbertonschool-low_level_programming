#include <stdio.h>

/**
 * main -  prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int nbr;

	for (nbr = 48; nbr <= 57; nbr++)
	{
		putchar(nbr);
		if (nbr < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
