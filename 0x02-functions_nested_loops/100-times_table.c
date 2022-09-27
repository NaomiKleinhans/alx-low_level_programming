#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number to which the time table will be printed
 * Return: void and print times table
 */

void print_times_table(int n)
{
	int num;
	int mult;
	int prod;

	if (n <= 15 && n >= 0)
	{

		for (num = 0; num <= n; num++)
		{
			for (mult = 0; mult <= n; mult++)
			{
				int(prod) = int(num * mult);

				if (mult < n)
				{
					_putchar(',');
					_putchar(' ');
				}	
				if ((num * (mult + 1)) < 10)
				{
					_putchar(',');
					_putchar(' ');
				}
				else if ((num * (mult + 1)) < 100)
				{	
					_putchar(' ');
				}
			}

		}
			_putchar('\n');
	}
}
