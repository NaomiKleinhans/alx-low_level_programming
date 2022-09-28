#include "main.h"
#include <stdio.h>

/**
 * prime2 - evaluate from 1 to n
 * @i: same as n
 * @j: iterates from 1 to n
 * Return: 1 on Success and -1 on error
 */
int prime2(int i, int j)
{
	if (i == j)
		return (1);
	else if (i % j == 0)
		return (0);
	return (prime2(i, j + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: Integer
 *
 * Return: 1 on success and 0 on error
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
