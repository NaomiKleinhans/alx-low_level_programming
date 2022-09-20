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
	int x, y, i;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
	puts("%s", *str / 2);
	puts("%s\n");
}
