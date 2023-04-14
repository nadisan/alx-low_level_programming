#include "main.h"
#include <stdio.h>
/**
 *recur - check if integer n is prime number.
 *@n: the given number to be checked if it's prime number.
 *@y: number to divide n by.
 *Return: 1 for prime number and 0 otherwise.
 */

int recur(int n, int y);

int recur(int n, int y)
{
	if (n > y)
	{
		if (n % y == 0)
			return (0);
		y++;
		recur(n, y);
	}
	return (1);
}
/**
 *is_prime_number - returns 1 for a prime number, otherwise return 0
 *@n: the input integer.
 *
 *Return: 1 for prime number and 0 otherwise.
 */

int is_prime_number(int n)
{

	if (n < 2)
		return (0);
	if (n == 2)
	{
		return (1);
	}
	return (recur(n, 2));
}
