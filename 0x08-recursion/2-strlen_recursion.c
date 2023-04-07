#include "main.h"
/**
 *_strlen_recursion - returns the length of a string
 *@s: the string to count
 *Return: integer.
 */

int i = 0;
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	i++;
	s++;
        _strlen_recursion(s);	
	return(i);
}
