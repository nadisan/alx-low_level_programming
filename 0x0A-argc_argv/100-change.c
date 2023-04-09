#include "main.h"
#include "cents.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - minimum number of coins to make change for an amount of money.
 *@argc: count of the arguments supplied to the program
 *@argv: pointer to array of arguments
 *Return: zero.
 */

int main(int argc, char **argv)
{
	int a;

	a = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 2)
	{
		check_rem(a);
	}
	return (0);
}
