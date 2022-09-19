#include "main.h"

/**
 * print_square - function that prints a square, followed by new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			putchar('#');
			for (y = 2; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
