#include "main.h"

/**
 * _sqrt_helper - recursive function to calculate the square root of a number.
 * @n: Current number being checked.
 * @base: The number for which the square root is being calculated.
 * Return: the natural square root of the number base.
 */

int _sqrt_helper(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (helper(n + 1, base));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number.
 * @n: the number to calculate the square root of.
 * Return: the square root of the number if it is a perfect square,
 *         -1 if the number does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_helper(1, n));
}
