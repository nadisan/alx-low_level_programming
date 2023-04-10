#include "main.h"
#include <stdio.h>

/**
 *_sqr - natural square root value of n.
 *@n: the number to find square root of.
 *@y: natural square root value of a.
 *Return: natural number or -1 for no natural square roots.
 */

int _sqr(int n, int y);

int _sqr(int n, int y)
{
	if (n == y * y)
		return (y);
	y++;
	if (n > y)
	{
		return (_sqr(n, y));
	}
	return (-1);
}

/**
 *_sqrt_recursion - returns natural square root value of n.
 *@n: the number to find square root of.
 *
 *Return: natural number or -1 for no natural square roots.
 */

int _sqrt_recursion(int n)
{
	return (_sqr(n, 1));
}
