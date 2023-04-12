#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *array_range - creates an array of integers..
 *@min: integer with given min value.
 *@max: integer with given maximum value.
 *Return: returns array.
*/

int *array_range(int min, int max)
{
	int *ar;

	int i, x;

	x = max - min;
	ar = malloc(x * sizeof(int) + 1);
	if (ar == NULL)
		return (0);

	for (i = 0; i <= x; i++)
	{
		ar[i] = min + i;
	}
	return (ar);
}
