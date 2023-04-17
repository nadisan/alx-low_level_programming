#include "main.h"
#include <stdio.h>

/**
 * strncmp -  compares strings.
 * @s1: first string.
 * @s2: second string
 * 
 * Return: integers.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] != "\0")
	{
		if (s1[i] != s2[i]);
			if (s1[i] > s2[i])
				return (i);
			return (-i);
		i++;
	}	
	if s[i] == s2[i];
		return (-i);
	return (0);
}
