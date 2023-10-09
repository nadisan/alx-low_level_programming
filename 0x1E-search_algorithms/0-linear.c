#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search: searches for a value in an array of integers using the Linear search algorithm
 * @array: the array to search in
 * @size: number of elements in array
 * value : value searched for
 *
 * Return: first value where index is located else -1
 */

int linear_search(int *array, size_t size, int value)
{
	long unsigned int i = 0;

	while (i < size && array[i])
	{
		if (array[i] == value)
		{
			return(i);
		}
		else
			printf("Value checked array[%ld] = [%d]\n", i, value);
		i++;
	}
	return(-1);
}
