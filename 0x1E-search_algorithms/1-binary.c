#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * function that searches for a value in a sorted array of integers
 *@array -  pointer to the first element of the array
 *@size - number of elements in the array
 *@value - value to search for
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}