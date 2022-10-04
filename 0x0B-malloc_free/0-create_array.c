#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars
 * @c: Specific Character
 * @size: the size of the memory to print
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array;

	array = malloc(sizeof(char) * size);
	free(array);

	return (0);

	for (i = 0; i < size; i++)
	
	array[i] = c;
	array[i] = 0;
	return (size < 1 ? 0 : array);
}
