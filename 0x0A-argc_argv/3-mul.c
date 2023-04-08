#include "main.h"
#include <stdio.h>

/**
 *main -  a program that prints its name, followed by a new line
 *@argc: count of the arguments supplied to the program
 *@argv: array of arguments
 *Return: zero.
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%i\n", argv[1] * argv [2]);
		return (0);
	}
	printf("%s\n", "Error");
	return (0);
}
