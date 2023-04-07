#include "main.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y.
 *@x: base number.
 *@y: power of number.
 *Return: integer.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	y--;
	return (1 * x * (_pow_recursion(x, y)));
}
