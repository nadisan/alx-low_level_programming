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
{	char c;
	size_t i = 0;
	FILE *file;

	if (!filename || !letters)
		return (0);
	if (!(fopen(filename, "r")))
		return (0);
	file = fopen(filename, "r");

	while (i < letters)
	{
		c = fgetc(file);
		if (feof(file))
			break;
		write(1, &c, 1);
		i++;
	}
	fclose(file);
	return (letters);
}
