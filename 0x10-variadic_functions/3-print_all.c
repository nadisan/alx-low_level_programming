#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - that prints anything.
 * @format: list of types of arguments
 *
 * Return: print
 */

void print_all(const char * const format, ...)
{
	int i;

	va_list list;

	va_start(list, format);

	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case ('c'):
				{
					printf("%c", va_arg(list, int));
					if (format[i + 1] != '\0')
						printf(" ");
					break;
				}
			case ('i'):
				{
					printf("%i", va_arg(list, int));
					if (format[i + 1] != '\0')
						printf(" ");
					break;
				}
			case ('s'):
				{
					printf("%s", va_arg(list, char *));
					if (format[i + 1] != '\0')
						printf(" ");
					break;
				}
			case ('f'):
				{
					printf("%f", va_arg(list, double));
					if (format[i + 1] != '\0')
						printf(" ");
					break;
				}
			default:
					break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
