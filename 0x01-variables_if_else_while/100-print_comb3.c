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

	for (a = 0; a < 99; a++)

	{
		for (d = a + 1; d < 100; d++)

		{
			if (a != d)
			{
				putchar(a + '0');
				putchar(d + '0');
				if (d != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
		return (0);
}
