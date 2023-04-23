#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *print_numbers - returns the sum of all its parameters
 *@separator: string to be printed between numbers
 *@n: number of arguments
 *
 *Return: 0 when n is null else sum.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	i = 0;
	va_start(ap, n);
	if (n == '\0')
		exit(0);
	while (i < n)
	{
		printf("%i", va_arg(ap, unsigned int));
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		i++;
	}
	printf("\n");
}
