#include "main.h"

/**
 * leet - unction that encodes a string into 1337
 * @src: String to encode
 *
 * Return: The encoded string
 */
char *leet(char *src)
{
	int a = 0, b = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (src[a])
	{
		b = 0;

		while (b < l)
		{
			if (src[a] == r[b] || src[a] - 32 == r[b])
			{
				src[a] = n[b];
			}
			b++;
		}
		a++;
	}
	return (src);
}
