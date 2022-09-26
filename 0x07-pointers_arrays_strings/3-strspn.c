#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: source string
 * @accept: searching string
 * Return: new string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k;

	for (k = 0; *(s + k); k++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + k) == *(accept + i))
				break;
		}
		if (*(accept + i) == '\0')
			break;
	}
	return (k);
}
