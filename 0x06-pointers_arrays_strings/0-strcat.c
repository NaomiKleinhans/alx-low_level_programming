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
	int index = 0, dest_len = 0;

	while (dest[index])
	{
		dest_len++;
	}

	for (index = 0; src[index] != 0; index++)
	{
		dest[dest_len] = src[index];
		dest_len++;
	}

	dest[dest_len] = '\0';
	return (dest);
}

