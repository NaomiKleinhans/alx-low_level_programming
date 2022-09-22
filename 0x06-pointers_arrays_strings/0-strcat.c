#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * the end of the string pointed to by @dest
 * @dest: String will be appended
 * @src: String to be concatenated on
 *
 * Return: return pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}

