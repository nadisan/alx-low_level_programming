#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 *main -  program that adds positive numbers.
 *@argc: count of the arguments supplied to the program
 *@argv: pointer to array of arguments
 *Return: zero.
 */

int main(int argc, char **argv)
{
	int a, i, len = 0, result;

	result = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argc > 1)
		{
			argc--;
			len = strlen(argv[argc]);
			for (i = 0; i < len-1; i++)
				if (argv[argc][i] >= '0' && argv[argc][i] <= '9')
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
