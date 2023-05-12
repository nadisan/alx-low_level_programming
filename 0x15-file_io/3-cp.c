#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * cp_file - copies the content of a file to another file
 * @file_1: file to be copied.
 * @file_2: file to copy to.
 * Return: void.
 */

void cp_file(const char *file_1, const char *file_2)
{
	int fd1, fd2;
	size_t size;
	char *buffer;
	ssize_t b_read, b_write;
	struct stat st;

	if (!file_1 || !file_2)
		return;
	fd1 = open(file_1, O_RDONLY);
	if (fd1 == -1)
	{	dprintf(2, "Error: Can't read from file %s\n", file_1);
		exit(98);
	}
	fd2 = open(file_2, O_CREAT | O_TRUNC | O_WRONLY);
	if (fd2 == -1)
	{	dprintf(2, "Error: Can't write to %s\n", file_2);
		exit(99);
	}
	stat(file_1, &st);
	size = st.st_size;
	buffer = malloc(sizeof(char) * size);
	if (!buffer)
		return;
	b_read = read(fd1, buffer, size);
	if (b_read == -1)
	{	dprintf(2, "Error: Can't read from file %s\n", file_1);
		exit(98);
	}
	b_write = write(fd2, buffer, b_read);
	if (b_write == -1)
	{	dprintf(2, "Error: Can't write to %s\n", file_2);
		exit(99);
	}
	close(fd1);
	if (close(fd1) > 0)
		dprintf(2, "Error: Can't close fd %i\n", fd1);
	close(fd2);
	if (close(fd2) > 0)
		dprintf(2, "Error: Can't close fd %i\n", fd2);
	free(buffer);
}



/**
 * main - check the code
 * @ac: number of arguments passed
 * @av: array of arguments.
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(av[1], av[2]);
	return (0);
}


