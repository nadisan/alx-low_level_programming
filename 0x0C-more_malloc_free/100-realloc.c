#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *@ptr:a pointer to the memory previously allocated with a call to malloc
 *@old_size: size in bytes, of the allocated space for ptr
 *@new_size: bytes of the new memory block
 *Return: Nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}
	return (ptr);
}
