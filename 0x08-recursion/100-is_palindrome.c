#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_sqr - natural square root value of n.
 *@n: the number to find square root of.
 *@y: natural square root value of a.
 *Return: natural number or -1 for no natural square roots.
 */

int _sqr(int n, int y);

int recur(char *s, int x, int i)
{
	if (i != x)
	{
		if (s[i] == s[x-i])
		{	i++;
			recur(s, x, i);
		}
		else
			return (0);
	}
	return (1);
}

/**
 *_sqrt_recursion - returns natural square root value of n.
 *@n: the number to find square root of.
 *
 *Return: natural number or -1 for no natural square roots.
 */

int is_palindrome(char *s)
{
	int x;

	x = strlen(s) - 1;
	return (recur(s , x, 0));
}
