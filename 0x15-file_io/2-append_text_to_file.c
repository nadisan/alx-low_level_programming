#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t size;
	ssize_t bwrite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);

	if (fd != -1)
	{
		if (!text_content)
			return (1);
		size = sizeof(text_content);
		bwrite = write(fd, text_content, size);
		if (bwrite >= 0)
		{	close(fd);
			return (1);
		}
	}
	close(fd);
	return (-1);
}
