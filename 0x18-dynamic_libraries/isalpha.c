#include "main.h"

/**
 *_isalpha - checks if it is lower case.
 *
 *c: characters ascii interger number.
 *
 *Return: 1 for lowercase, 0 otherwise.
 */

int _isalpha(int c)
{
        if (c >= 97 && c <= 122)
                return (1);
	if (c >= 65 && c <= 90)
		return (1);
        return (0);
}
 
