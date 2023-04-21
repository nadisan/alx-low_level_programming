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
	int i;

	i = 0;
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if ((cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
