#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main -  a program that prints its name, followed by a new line
 *@argc: count of the arguments supplied to the program
 *@argv: array of arguments
 *Return: zero.
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc == 3)
	{
		/* atoi convert a string to an int */
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
