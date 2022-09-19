#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @b : first pointer
 * @a : Second pointer
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int constant = *a;
	*b = *a;
	*a = constant;
}
