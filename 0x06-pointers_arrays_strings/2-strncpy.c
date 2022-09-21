#include "main.h"

/**
 * _strncpy - C function that copies a string, including
 * terminating null byte, using at most an inputted number of bytes
 * If length of source string is less than the maximum byte number,
 * the remainder of destination string is filled with null bytes
 * works identically to standard library function 'strncpy'
 * @dest: buffer storing the string copy
 * @src: source string
 * @n: max number of byte copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';
	
	return (dest);
}
