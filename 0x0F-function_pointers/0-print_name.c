#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name and it's capital
 * @name: name of the person
 * @f: pointer to function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
