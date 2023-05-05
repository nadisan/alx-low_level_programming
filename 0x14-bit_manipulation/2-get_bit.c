#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input number
 * @index:  the index, starting from 0 of the bit you want to get
 * Return: value of the bit at index or -1 if an error occured
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int z;

		if (n == '0' || index == '0')
			return (-1);

		z = 1UL << (index);	
		if (n & z)
			return (1);
		return (0);
}
