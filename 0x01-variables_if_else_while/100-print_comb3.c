#include <stdio.h>

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

	for (a = 0; a < 9; a++)
	{
		for (d = a + 1; d < 10; d++)
		{
			putchar((a % 10) + '0');
			putchar((d % 10) + '0');

			if (a == 8 && a == 8)
				continue;
			putchar(',');
			
			if (a == 8 && a == 9)
				continue;
			putchar(' ');
		}
	}

	return (0);
}
