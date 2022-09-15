#include "main.h"

/**
 * print_line - printing line
 * @n: integer params
 */
void print_line(in n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x <= n; x++)
		_putchar(' ');
	_putchar('\n');
}
