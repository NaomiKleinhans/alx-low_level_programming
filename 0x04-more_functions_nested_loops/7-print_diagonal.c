include "main.h"

/**
 * print_diagonal - a function that draws a diagonal ;ine on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal (int n)
{
	int x, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (i = 1; i < x; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
