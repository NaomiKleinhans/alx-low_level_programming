#include "main.h"

/**
 * puts_half - function that prints half of a string. followed by a new line.
 * @srt: This is the input string
 *
 * Description: prints a string
 * On success: return the number of characters printed
 */

void puts_half(char *srt)
{
	int index, half;

	index = 0;
	while (srt[index] != '\0')
		index++;

	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		_putchar(srt[half]);
		half++;
	}
	_putchar('\n');
}
