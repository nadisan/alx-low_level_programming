#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenates two strings.
 *@s1: pointer to first string.
 *@s2: pointer to second string.
 *Return: returns string.
*/

char *str_concat(char *s1, char *s2)
{
	int i, x, y;

	char *ar;

	i = 0;
	y = strlen(s2);
	x = strlen(s1);
	ar = malloc((x + y) * sizeof(char) + 1);
	

	if (s1 != NULL)
	{
		for (i = 0; i <= (x); i++)
                {
                        ar[x] = s2[i];
                }
	}
	if (s2 != NULL)
	{
		for (i = 0; i <= (y); i++)
		{
			ar[i + x] = s2[i];
		}
	}
	return (ar);
}
