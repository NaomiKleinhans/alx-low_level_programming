#include "main.h"

/**
 * _memcpy - copies memory in another buffer.
 * @n:Length of buffer
 * @src: String for filling
 * @dest: Source string
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
