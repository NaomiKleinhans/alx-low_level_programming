#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - exec function given as param on each element of an array
 * @array: array of ints
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: Nothing
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int));
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
