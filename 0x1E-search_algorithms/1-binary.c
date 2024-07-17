#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints the elements of an array
 * @array: The array to be printed
 * @low: Starting index of the array
 * @high: Ending index of the array
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i > low)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
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
