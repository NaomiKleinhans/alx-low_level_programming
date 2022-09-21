#include "main.h"

/**
 *_strncat - function that concatenates two strings but add inputted number of bytes
 * @dest: String will be appended
 * @src: String to be concatenated on
 * Return: returns new concatenated string
 */

charchar *_strncpy(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;
	
	while (dest[index++])
		dest_len++;
	
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	
	return (dest);
}
