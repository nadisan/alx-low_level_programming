#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary of a number
 * @n: a number
 * Return: binary of a number
 */

void print_binary(unsigned long int n)
{
	int x = 0;

	if (n == 0 || n == 1)
		printf("%li", n);
	else
		if (n)
		{	x = n;
			x -= (2 * (n >> 1));
			print_binary(n >>= 1);
			printf("%i", x);
		}
}
