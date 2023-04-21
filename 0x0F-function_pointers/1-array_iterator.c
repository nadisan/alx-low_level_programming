#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function each element of an array.
 * @array: pointer to integer array
 * @size: size of array
 * @action: function that takes array element
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		(action)(array[i]);
}
