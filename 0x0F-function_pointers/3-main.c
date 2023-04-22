#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: void.
 */
int main(int argc, char *argv[])
{
	int num2;

	/*int num1*/
	char *op;

	if (argc != 4)
        {
                printf("%s\n", "Error");
                exit(98);
        }
       /* num1 = atoi(argv[1]);*/
        num2 = atoi(argv[3]);
        op = argv[2];
        if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
        {
                printf("%s\n", "Error");
                exit(100);
        }
       /* if ((op[1] != '\0') || == NULL))
        {
                printf("%s\n", "Error");
                exit(99);
        }
	printf("%d\n", (get_op_func(op)(num1, num2));*/
	return (0);
}
