#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: number of elements in the array
 * @cmp: a pointer to the function that compare values
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, count;

	count = 0;
	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if ((cmp)(array[i]) != 0)
			count++;
	}
	return (count);
}
