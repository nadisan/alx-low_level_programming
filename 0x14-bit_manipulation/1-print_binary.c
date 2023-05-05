#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary of a number
 * @n: a number
 * Return: binary of a number
 */

void print_binary(unsigned long int n)
{
	unsigned long int x = 0;
	unsigned long int y = 1UL <<(sizeof(unsigned long int)* 8 - 1);

	while (y)
	{
		if (n & y)
		{	putchar('1');
			x = 1;
		}
		else if (x)
		{
			putchar('0');
		}
		y >>= 1;
	}

	if(!x)
	{
		putchar('0');
	}
}
