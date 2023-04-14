#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *mul(char *num1, char *num2)
{
	int  i, x, y, n1, n2;
	int *s;
	
	i = 0;
	x = strlen(num1);
	y = strlen(num2);
	
	for(i = 0; i < x; i++)
	{
		if (num1[i] >= '0' && num1[i] <= '9')
		{
			n1 = atoi(num1);
		}
		else
		{
			printf("Error\n");
				exit(98);
		}
	}
	for(i = 0; i < y; i++)
        {
                if (num2[i] >= '0' && num2[i] <= '9')
		{
			n2 = atoi(num2);
		}
		else
                {
                        printf("Error\n");
                                exit(98);
                }
        }

	s = malloc((x*y)*sizeof(int));
	s[0] = n1 * n2;
	printf("%d\n", s[0]);
	free(s);
	return (0);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
    mul(argv[1], argv[2]);
    return (0);
}
