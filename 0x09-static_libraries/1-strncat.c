#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * the end of the string pointed to by @dest
 * @dest: String will be appended
 * @src: String to be concatenated
 * @n: Limit of the concatenation
 * Return: return pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
