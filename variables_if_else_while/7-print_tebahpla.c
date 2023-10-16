#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char Alphabet;

	for (Alphabet = 'z'; Alphabet >= 'a'; Alphabet--)
		putchar(Alphabet);

	putchar('\n');

	return (0);
}
