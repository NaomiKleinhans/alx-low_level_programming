#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: pointer to name of file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	return (1);
}
