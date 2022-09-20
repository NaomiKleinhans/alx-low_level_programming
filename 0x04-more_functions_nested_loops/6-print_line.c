#include "main.h"

/**
 * print_line - function printing line that draws a strau=ight line in the terminal
 * @n: input number of times 
 * Return: a straight line
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
		_putchar(95);
		}
		_putchar('\n');
	}
}
