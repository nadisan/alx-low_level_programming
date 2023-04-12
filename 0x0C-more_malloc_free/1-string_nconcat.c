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
	unsigned int i, y, x;

	char *s;

	if (s1 == NULL)
	{
		if (s2 == NULL)
			exit(0);
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	y = strlen(s1);
	x = strlen(s2);
	if (n > x)
		n = x;
	s = malloc(sizeof(s1) + n + 1);
	if (s == NULL)
		exit(0);
	for (i = 0 ; i < (y + n) ; i++)
	{
		if (i < y)
			s[i] = s1[i];
		else
			s[i] = s2[i - y];
	}

	return (s);
}

