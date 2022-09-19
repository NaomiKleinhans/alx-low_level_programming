#include "main.h"

/**
 * _isupper - function to check upper case alphas
 * @c: Input
 * Return: 1 if c is a digit or 0 if otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else 
		return (0);
}
