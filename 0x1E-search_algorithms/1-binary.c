#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for value in sorted array(Binary search algorithm)
 * @array:  pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: is the value to search for
 * Return: index with the value, else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t h;

	if (!array)
	{	printf("Searching in array: \n");
		return (-1);
	}

	while (i < size)
	{
		printf("Searching in array: ");
		for (h = i; h < size; h++)
		{
			if (h == (size - 1))
				printf("%lu\n", h);
			else
				printf("%lu, ", h);
		}
		h = (i + size - 1) / 2;
		if (array[h] == value)
			return (h);
		else if (value > array[h])
			i = h + 1;
		else
			size = h;
	}
	return (-1);
}
