#include "search.h"
#include <stddef.h>
#include <stdio.h>
#include <math.h>

/**
* printArray - Prints the elements of an array.
* @array: The array to be printed.
* @size: The size of the array.
*/
void printArray(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
/**
* exponential_search - Search for a value in an array using exponential search.
* Description: This function searches for the specified 'value'
* @array: Pointer to the integer array.
* @size: Size of the array.
* @value: Value to be searched.
* Return: Index of the 'value' if found, or -1 if not found.
*/


int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t mid;
	size_t left, right = 0;

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	left = right;
	right = (i < size) ? i : size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return ((int)mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
		    right = mid - 1;
		}
			printf("Value found between indexes [%ld] and [%ld]\n", left, right);
			return (1);
	}
		if (left <= right)
		{
			printArray(&array[left], right - left + 1);
		}
		return (-1);
}
