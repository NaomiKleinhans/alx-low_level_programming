#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * Print in order, separated by a comma, followed by a space
 * @n: number to start counting
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
