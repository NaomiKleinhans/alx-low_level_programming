#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: Copy of string given as parameter
 * Return: 0
 */

char *_strdup(char *str)
{
	char *cstr;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	cstr = malloc(sizeof(char) * (len + 1));

	if (cstr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		cstr[i] = str[i];
	}
	cstr[len] = '\0';

	return (cstr);
}
