#include "main.h"

/**
 * print_number - Prints an integer value.
 * @n: The integer value to be printed.
 */

void print_number(int n)
{
	int result, temp, exponent;

	exponent = 1;

	if (n >= 0)
		result = -n;
	else
	{
		result = n;
		_putchar('-');
	}

	temp = result;
	while (temp <= -10)
	{
		exponent *= 10;
		temp /= 10;
	}

	while (exponent >= 1)
	{
		_putchar(((result / exponent) % 10) * -1 + '0');
		exponent /= 10;
	}
}
