#include "main.h"
#include <stdio.h>

/**
 * flip_bits - return number of bits needed to flip numbers.
 * @n: number
 * @m: number to flip n to.
 *
 * Return: necessary number of bits to flip to get n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m, bits = 0;

	while (i > 0)
	{
		bits += (i & 1);
		i >>= 1;
	}
	return (bits);
}
