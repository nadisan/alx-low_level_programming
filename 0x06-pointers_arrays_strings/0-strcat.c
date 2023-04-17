#include "main.h"
/**
 * _strcat - returns the concatenates of two strings
 * @dest: pointer
 * @src: pointer
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	char *cat;

	i = 0;
	j = 0;
	while (dest[i] != "\0")
	{	
		cat[i] = dest[i];
		i++;
	}
	if (dest[i] == "\0")
	{
		cat[i] = " ";
		i++
	}
	while (src[j] != "\0")
	{
		cat[i] = src[j];
		j++;
		i++;
	}
	return (cat);
}
