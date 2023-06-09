#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *print_strings - prints strings with separtor
 *@separator: string to be printed between numbers
 *@n: number of arguments
 *
 *Return: 0 when n is null else sum.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	char *p;

	i = 0;
	va_start(ap, n);
	while (i < n)
	{
		p = va_arg(ap, char *);
			if (p == NULL)
				p = "(nil)";
		printf("%s", p);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
