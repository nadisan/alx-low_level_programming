#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - minimum number of coins to make change for an amount of money
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
	int check_rem(int y);

	int check_rem(int y)
	{
		int i, z;

		int x[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i--)
		{
			if (y >= x[i])
			{
				if (y % x[i] <= 2)
				{
					z = y / x[i] + y % x[i];
					printf("%d\n", z);
					return (0);
				}
				else
				{
					z = y / x[i] + check_rem(y % x[i - 1]);
					printf("%d\n", z);
					return (0);
				}
			}
			if (y < x[i])
			{
				check_rem(y % x[i - 1]);
			}
		}
		return (0);
	}
	return (0);
}
