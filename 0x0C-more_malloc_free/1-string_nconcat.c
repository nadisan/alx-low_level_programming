#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - concatenates two strings.
 *@s1: pointer to string 1
 *@s2: pointer to string 2
 *@n: unsinged integer declaring characters to pass from s2
 *Return: pointer to strings
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, y;

	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";
	y = strlen(s1);
	s = malloc(sizeof(s1 + 1) + n + 1);
	if (s == NULL)
		return ("NULL");
	for (i = 0 ; i < (y + n) ; i++)
	{
		if (i < y)
			s[i] = s1[i];
		else
			s[i] = s2[i - y];
	}

	return (s);
}

