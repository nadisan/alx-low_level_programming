#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer
 * @av: pointer to argument array
 * Return: concated strings.
 */

char *argstostr(int ac, char **av)
{
	char *arr;
	
	int i;

	arr = malloc(ac * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		arr[i] = malloc(sizeof(char) * strlen(av[i]));
	}
	if (arr == NULL)
		return (NULL);
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	return (*arr);

}

