#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a
 *                  parameter on each element of an array
 *
 * @array: the array to use
 * @size: size of the array
 * @action: pointer to print in regular or hex
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
