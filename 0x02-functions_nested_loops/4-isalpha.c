#include "main.h"
/**
 * _isalpha - function to check if c is a letter, lowercase or uppercase
 * @c: int used for agrument of function
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
