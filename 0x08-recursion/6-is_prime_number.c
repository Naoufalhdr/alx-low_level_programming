#include "main.h"

/**
 * is_divisible - checks if a number is divisible by any number.
 * @n: the number to be checked.
 * @divisor: the current divisor being checked.
 * Return: 1 if the number is divisible, 0 otherwise.
 */

int is_divisible(int n, int divisor)
{
	if (divisor <= 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - checks if a number is a prime number.
 * @n: the number to be checked.
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_divisible(n, n - 1));
}
