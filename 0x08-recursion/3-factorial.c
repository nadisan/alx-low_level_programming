#include "main.h"
#include <stdio.h>

/**
 *factorial(int n) - factorial of a given number
 *@n given number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (1 * (n*(factorial(n-1))));
}
