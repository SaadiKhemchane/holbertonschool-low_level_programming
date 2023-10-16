#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: 0.
*/
int main(void)
{
	char Alphabet;

	for (Alphabet = 'a'; Alphabet <= 'z'; Alphabet++)
		putchar(Alphabet);

	putchar('\n');

	return (0);
}
