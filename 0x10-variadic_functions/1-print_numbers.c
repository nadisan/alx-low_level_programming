#include <stdarg.h>
#include <stdio.h>

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
	while (i < n && n != null)
	{
		printf("%i", va_arg(ap, unsigned int));
			if (separator != NULL)
				printf("%s", separator);
		i++;
	}
	printf("\n");
}
