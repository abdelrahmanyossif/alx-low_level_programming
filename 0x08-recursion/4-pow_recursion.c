#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base
 * @y: exposant
 * Return: pointer to the byte in 's' that matches one of the bytes in 'accept'
 * or NULL if no such byte is found.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
