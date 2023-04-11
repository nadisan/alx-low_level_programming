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
	if (s1 == NULL)
	{
		x = 0;
	}
	else
	{
		x = strlen(s1);
	}
	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		y = strlen(s2);
	}
	ar = malloc((x + y) * sizeof(char) + 1);

	if (ar == NULL) {return "no malloc allocation";}
	if (x != 0)
	{
		for (i = 0; i <= (x); i++)
		{
			ar[i] = s1[i];
		}
	}
	if (y != 0)
	{
		for (i = 0; i <= (y); i++)
		{
			ar[i + x] = s2[i];
		}
	}
	return (ar);
}
