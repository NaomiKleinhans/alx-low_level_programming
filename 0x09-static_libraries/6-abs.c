#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @c: int used for argument of function
 * Return: Always 0 (success)
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
