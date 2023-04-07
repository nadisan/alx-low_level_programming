#include "main.h"
#include <stdio.h>
/*
 *main - a program that prints all arguments it receives.
 *@argc: count of the arguments supplied to the program
 *@argv: array of arguments
 *Return: zero.
 */

int main(int argc, char **argv)
{
	int i = 0;

	for ( ; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);
}
