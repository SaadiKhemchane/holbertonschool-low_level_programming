#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str : char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *mlc;
	int lon, compt;

	if (str == NULL)
		return (NULL);
	lon = 0;
	while (str[lon] != '\n')
		lon++;

	mlc = malloc(sizeof(char) * (lon + 1));

	if (mlc == NULL)
		return (NULL);

	for (compt = 0; str[compt]; compt++)
		mlc[compt] = str[compt];

	return (mlc);
}
