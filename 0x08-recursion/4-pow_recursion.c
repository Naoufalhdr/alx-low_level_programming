#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y.
 * @x: the base number.
 * @y: the exponent.
 * Return: The result of x raised to the power of y,
 *         if y is lower than 0, it return -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
