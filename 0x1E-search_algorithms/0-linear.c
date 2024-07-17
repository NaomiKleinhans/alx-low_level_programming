#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found
 *  or if the array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}
