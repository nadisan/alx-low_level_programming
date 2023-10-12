#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - find a value in sorted array of integers w jump search
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to e searched for
 * Return: the index with the value or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t j = sqrt(size);
	size_t h;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%u]\n", i, array[i]);
		i += j;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - j, i);
	for (h = i - j; h < size; h++)
	{
		printf("Value checked array[%lu] = [%u]\n", h, array[h]);
		if (array[h] == value)
			return (array[h]);
	}

	return (-1);
}
