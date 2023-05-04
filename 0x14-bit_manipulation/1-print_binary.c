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
	{	x = n % 2;
		n = n / 2;
		print_binary(n);
		printf("%i", x);
	}

}
