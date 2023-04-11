#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: width dimension
 *@height: length dimension
 *Return: pointer.
 */

int **alloc_grid(int width, int height)
{
	int i, j, **s;

	i = 0;
	if (height <= 0 || width <= 0)
		return (NULL);
	s = malloc(sizeof(int) *((width * height) + 1));
	if (s == 0)
		return (0);
	while (i <= height)
	{
		for (j = 0 ; j <= width; j++)
		{
			s[i][j] = 0;
		}
		i++;
	}
	return (s);
}
