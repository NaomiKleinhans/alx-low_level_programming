#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located,
 *         or -1 if value is not found or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return -1;

	int step = sqrt(size);

	int prev = 0;
	int current = step;

	while (array[current] < value && current < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", current, array[current]);
		prev = current;
		current += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, current);

	for (int i = prev; i <= current && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}

	return -1;
}