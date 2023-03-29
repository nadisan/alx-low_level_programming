#include "main.h"
/**
 * _strlen - function returns the length of a string
 * @s: pointer to the string whose length is to be calculated
 * Return: length
 */
void int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
