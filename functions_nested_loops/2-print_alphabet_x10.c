#include "main.h"

/**
 * print_alphabet_x10 - Fonction pour imprimer l'alphabet en minuscules x10
 */
void print_alphabet_x10(void)
{
	int nbr_repeat = 0;
	char alphabet;

	while (nbr_repeat++ < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
