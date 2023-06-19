#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: the file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	mode_t mode = S_IRUSR | S_IWUSR;
	ssize_t size, b_write;

	if (!filename)
		return (-1);
	fd = creat(filename, mode);
	size = strlen(text_content);

	b_write = write(fd, text_content, size);
	if (b_write == -1)
		return (-1);
	return (1);
}
