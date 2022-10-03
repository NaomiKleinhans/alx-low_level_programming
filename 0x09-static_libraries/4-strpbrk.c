#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: source string
 * @accept: searching string
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; *(s + i); i++)
	{
		for (k = 0; *(accept + k); k++)
		{
			if (*(s + i) == *(accept + k))
			{
				break;
			}
		}
		if (*(accept + k) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
