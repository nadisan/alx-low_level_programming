#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *rev - checks the reverse the same as given string.
 *@s: the given string.
 *@x: length of the given string.
 *@i: count starting from zero upto x.
 *Return: 1 if true and 0 if false.
 */

int rev(char *s, int x, int i);

int rev(char *s, int x, int i)
{
	if (i != x)
	{
		i++;
		if (s[x - i] != s[i])
			return (0);
		rev(s, x, i);
	}
	return (1);
}

/**
 *is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 *@s: the given string.
 *
 *Return: 1 or 0.
 */

int is_palindrome(char *s)
{
	int x, i;

	i = 0;
	x = strlen(s) - 1;
	return (rev(s, x, i));
}
