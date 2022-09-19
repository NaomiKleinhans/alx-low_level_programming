#include "main.h"

/**
 * print_line - function printing line that draws a strau=ight line in the terminal
 * @n: input number of times 
 * Return: a straight line
 */
void print_line(in n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	else
	{
		for (co = 1; co <= n; co++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
}
