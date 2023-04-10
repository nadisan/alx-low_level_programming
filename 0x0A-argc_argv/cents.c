#include "main.h"
#include "100-change.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *check_rem -  prints minum value for y change based on array valus in x..
 *@y: amount to be changed.
 *Return: zero.
 */

int check_rem(int y);

int check_rem(int y)
{
	int i, z;
	
	int x[] = {25, 10, 5, 2, 1};
	for (i = 0; i < 5; i--)
	{
		if (y >= x[i])
		{
			if (y % x[i] <= 2)
			{
				z = y / x[i] + y % x[i];
				printf("%d\n", z);
				return (0);
			}
			else
			{
				z = y / x[i] + check_rem(y % x[i - 1]);
				printf("%d\n", z);
				return (0);
			}
		}
		if (y < x[i])
		{
			check_rem(y % x[i - 1]);
		}
	}
	return (0);
}
