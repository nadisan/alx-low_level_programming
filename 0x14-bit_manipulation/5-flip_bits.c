#include <stdio.h>
#include "main.h"

/**
 * flip_bits - number of bits to be flipped to get from one number to another
 * @n: number to be flipped
 * @m: the other number
 * Return: above 0;
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int z;
	unsigned long int y;
	unsigned int index = (sizeof(unsigned long int) * 8);

	z = n ^ m;

	while (index)
	{
		y = 1Ul << index;
		if (z & y)
			i++;
		index -= 1;
	}

	return (i);




}
