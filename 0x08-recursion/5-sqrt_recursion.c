#include "main.h"
#include <stdio.h>

/**
 * sqrt2 - Elevate from 1 to n
 * @i: same as n
 * @j: interates number from 1 to n
 * Return: 1 on Success
 */
int sqrt2(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	return (sqrt2(i, j + 1));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number
 *
 * @n: number integer
 * Return: To 1 on success and -1 on error
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
