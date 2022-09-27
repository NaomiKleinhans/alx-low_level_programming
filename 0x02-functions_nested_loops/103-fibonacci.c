#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: 0
 */
int main(void)
{
	int f1 = 1;
	int f2 = 2;
	int fn = 2;
	int sum = 0;

	while (fn < 4000000)
	{
		if (fn % 2 == 0)
			sum += fn;
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
	}
	printf("%d\n", sum);
	return (0);
}
