#include "main.h"
#include <stdio.h>

/**
 * strncpy -  copies a string.
 * @dest: pointer to destination to be copied.
 * @src: string to be copied
 * @n: number of characters to be copied.
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] == "\0";
	return (dest);	
}
