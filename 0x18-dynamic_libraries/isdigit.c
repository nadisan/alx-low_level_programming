#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if c is digit.
 *@c : given int character.
 *
 * Return: 1 if digit , 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
