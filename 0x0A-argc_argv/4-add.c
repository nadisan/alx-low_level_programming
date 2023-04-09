#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 *main -  a program that prints its name, followed by a new line
 *@argc: count of the arguments supplied to the program
 *@argv: array of arguments
 *Return: zero.
 */


int main(int argc, char **argv)
{
	int a, result;

	result = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argc > 1)
	{
		argc--;
		if (*argv[argc] >= '0' && *argv[argc] <= '9')
		{
			/* atoi convert a string to an int */
			a = atoi(argv[argc]);
			result = result + a;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
