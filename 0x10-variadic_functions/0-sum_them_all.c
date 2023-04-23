#include <stdarg.h>
#include <stdio.h>

/**
 *sum_them_all - returns the sum of all its parameters
 *@n: number of arguments
 *
 *Return: 0 when n is null else sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, add;

	va_list ap;

	i = 0;
	add = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	while (i < n)
	{
		add += va_arg(ap, unsigned int);
		i++;
	}
	va_end(ap);
	return (add);
}
