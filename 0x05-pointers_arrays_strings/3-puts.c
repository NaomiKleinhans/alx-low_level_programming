#include <stdio.h>
#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string to print
 * Description: prints a string
 * Return: On success
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
