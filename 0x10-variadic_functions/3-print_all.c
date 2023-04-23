#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - that prints anything.
 * @format: list of types of arguments;
 * Return: print
 */
void print_all(const char * const format, ...)
{
	int i;

	char *sp, *nil;

	va_list list;

	va_start(list, format);
	i = 0;
	sp = "";
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case ('c'):
						printf("%s%c", sp,va_arg(list, int));
						break;
				case ('i'):
						printf("%s%i", sp, va_arg(list, int));
						break;
				case ('s'):
						nil = va_arg(list, char *);
						if (!nil)
							nil = "(nil)";
						printf("%s%s", sp, nil);
						break;
				case ('f'):
						printf("%s%f", sp, va_arg(list, double));
						break;
				default:
						break;
			}
			i++;
			sp = ", ";
		}
	}
	printf("\n");
}
