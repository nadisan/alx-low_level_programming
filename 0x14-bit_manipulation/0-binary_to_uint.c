#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string
 * Return: converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, pow = 1, num = 0;

	len = strlen(b);

	while (len)
	{
		if (b[len - 1] == 49)
			num += pow;
		else if (b[len - 1] != 48)
			return (0);
		pow *= 2;
		len--;
	}
	return (num);
}
