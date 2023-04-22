#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: numer of elments in argv array
 * @argv: pointer to array of arguments
 *
 * Return: 0 sometimes
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error/n");
		exit(1);
	}

	int size, i;

	char *ar;

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;
	i = 0;

	while (i < size)
	{
		if (i == size - 1)
		{	printf("%02hhx\n", ar[i]);
			break;
		}
		printf("%02hhx ", ar[i]);
		i++;
	}
	return (0);

}

