#include "main.h"
#include <stdio.h>

/**
 * strncat - concatenates two strings at most n bytes from second string.
 *@dest: first string
 *@src: second string
 *n: number of bytes to use for second string.
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n);
{
	int i, j;

        char *cat;

        i = 0;
        j = 0;
        while (dest[i] != "\0")
        {
                cat[i] = dest[i];
                i++;
        }
        if (dest[i] == "\0")
        {
                cat[i] = " ";
                i++
        }
        while (j < n)
        {
                cat[i] = src[j];
                j++;
                i++;
        }
	cat[i] == "\0";
        return (cat);
}

