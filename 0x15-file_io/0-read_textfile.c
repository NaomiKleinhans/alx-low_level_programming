#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to the POSIX standard output
 * @filename: pointer to name of file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters * sizeof(char) + 1);
	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	close(fd);
	free(buffer);
	if (r == w)
	return (w);
	return (0);
}

