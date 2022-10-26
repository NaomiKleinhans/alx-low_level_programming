#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Character to print
 *
 * Return: on success 1.
 * On error - -1 returned, and errno set appropriately
 */

int_putchar(char c)
{
	return (write(1, &c, 1));
}
