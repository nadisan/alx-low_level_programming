#include "main.h"

/**
 *_islower - checks if it is lower case.
 *
 *c: characters ascii interger number.
 *
 *Return: 1 for lowercase, 0 otherwise.
 */
 
int _islower(int c)
{
	if ( c >= 97 && c <= 122)
		return (1);
	return (0);
}
