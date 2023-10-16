#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char Alphabets;

	for (Alphabets = 'a'; Alphabets <= 'z'; Alphabets++)
	{
		if (Alphabets != 'e' && Alphabets != 'q')
			putchar(Alphabets);
	}

	putchar('\n');

	return (0);
}
