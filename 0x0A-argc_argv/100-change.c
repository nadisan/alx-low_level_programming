#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *check_rem -  prints minum value for y change based on array valus in x.
 *@y: amount to be changed.
 *@i: array number for the value of coins in x.
 *Return: zero.
 */

int check_rem(int y, int i);

int check_rem(int y, int i)
{
	int  z;

	int x[] = {25, 10, 5, 2, 1};

	while (i < 5)
	{
		if (y >= x[i])
		{
			if (y % x[i] <= 2)
			{
				z = y / x[i] + y % x[i];
				return (z);
			}
			z = y / x[i] + check_rem(y % x[i], i + 1);
			return (z);
		}
		i++;
	}
	return (0);
}

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
		printf("%d\n", check_rem(a, 0));
	}
	return (0);
}
