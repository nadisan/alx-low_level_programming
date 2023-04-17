#include "main.h"
#include <stdio.h>
#include <string.h>

int recr(char *s1, char *s2, int len);

int recr(char *s1, char *s2, int len)
{
	if (len < 0)
		return (1);
	if (s1[len] == s2[len] || s2[len] == *)
		return (recr(s1, s2, len-1));
	return (0);
}

/**
 * wildcmp -  compares two strings and returns 1 otherwise 0
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0.
 */

int wildcmp(char *s1, char *s2)
{
	int len, len1;

	len = strlen(s1) - 1;
	len1 = strlen(s2) - 1;
	
	if (len1 != len)
		return (0);
	return (recr(s1, s2, len));
}
