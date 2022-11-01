#include "main.h"

/**
 * print_line - function print a straight line in the terminal
 * @n: number of times the character _ should be printed
 * Return: a straight line
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
}
