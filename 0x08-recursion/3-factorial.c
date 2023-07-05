#include "main.h"

/**
 * factorial - Calculates the factorial of a number recursively.
 * @n: The number to calculate the factorial of.
 * Return: The factorial of the number.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
