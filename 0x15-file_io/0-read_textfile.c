#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standout
 *@filename: name of file to read
 *@letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t b_read, b_write;
	int fd;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (!(fd))
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{	close(fd);
		return (0);
	}
	b_read = read(fd, buffer, letters);
	if (b_read != -1)
	{
		b_write = write(STDOUT_FILENO, buffer, b_read);
		if (b_write != -1)
		{	close(fd);
			free(buffer);
			return (b_write);
		}
	}
	close(fd);
	free(buffer);
	return (0);
}
