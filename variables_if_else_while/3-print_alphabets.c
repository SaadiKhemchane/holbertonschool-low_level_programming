#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Succes)
*/
int main(void)
{
	char Alphabets;

	for (Alphabets = 'a'; Alphabets <= 'z'; Alphabets++)
		putchar(Alphabets);
	for (Alphabets = 'A'; Alphabets <= 'Z'; Alphabets++)
		putchar(Alphabets);

	putchar('\n');

	return (0);
}
