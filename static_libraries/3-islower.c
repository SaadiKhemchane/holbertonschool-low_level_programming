#include "main.h"

/**
 * _islower - check if letter is lowercase
 *@c: character to be checked
 *
 * Return: 1 if it's good, 0 in other case
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
