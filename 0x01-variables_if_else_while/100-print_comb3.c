#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints all different smallest combinations of two digits
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int a, d;

	for (a = 0; a < 10; a++)

	{
		for (d = 0; d < 10; d++)
		{
			putchar((a % 10) + '0');
			putchar((d % 10) + '0');

			if (a == 9 && a == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
