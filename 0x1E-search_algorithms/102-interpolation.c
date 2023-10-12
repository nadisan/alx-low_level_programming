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
	size_t pos;
	size_t h = size -1;

	if (array == NULL)
		return (-1);

	while (1)
	{
		pos = i + (((double)(h - i) / (array[h] - array[i])) * (value - array[i]));
		if (pos > size)
		{	printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			h = pos - 1;
		else
                        i = pos + 1;
	}
	return (-1);
}
