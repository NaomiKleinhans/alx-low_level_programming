#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string. followed by a new line.
 * @str: This is the input string
 *
 * Return: half the input
 */

void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		k = (j - 1) / 2;
		k += 1;
	}
	else
	{
		k = j / 2;
	}
	for (; k < j; k++)
	{
		putchar(str[k]);
	}

	putchar('\n');
}
