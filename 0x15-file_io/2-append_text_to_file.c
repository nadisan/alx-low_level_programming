#include <stdio.h>
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
	FILE *fp;
	size_t bwrite, size;

	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "a+");

	if (fp)
	{
		if (!text_content)
			return (1);
		size = sizeof(text_content);
		bwrite = fwrite(text_content, 1, size, fp);
		if (bwrite == size)
		{	fclose(fp);
			return (1);
		}
	}
	fclose(fp);
	return (-1);
}
