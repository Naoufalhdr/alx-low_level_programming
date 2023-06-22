#include "main.h"

/**
 * print_number - prints a number.
 * @n: nunmber to be printed.
 * Return: nothing.
 */

void print_number(int n)
{
	int divisor, digit;

	divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (divisor <= n / 10)
		divisor *= 10;

	while (divisor > 0)
	{
		digit = n / divisor;
		_putchar('0' + digit);
		n %= divisor;
		divisor /= 10;
	}
}
