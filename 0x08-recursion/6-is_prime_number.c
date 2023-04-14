#include "main.h"
#include <stdio.h>

/**
 *is_prime_number - returns 1 for a prime number, otherwise return 0
 *@n: the input integer.
 *
 *Return: natural number or -1 for no natural square roots.
 */

int is_prime_number(int n)
{
	int i;

	if (n < 2)
		return (0);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
