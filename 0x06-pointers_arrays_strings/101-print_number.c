#include "main.h"

/**
 * print_number - Prints an integer value.
 * @n: The integer value to be printed.
 */

void print_number(int n)
{
	long length, result, i, temp, exponent;

	result = n;
	exponent = length = 1;

	if (result < 0)
	{
		result *= -1;
		_putchar('-');
	}

	temp = result;
	while (temp >= 10)
	{
		length++;
		temp /= 10;
	}

	for (i = 1; i < length; i++)
		exponent *= 10;

	while (exponent > 1)
	{
		_putchar((result / exponent) % 10 + '0');
		exponent /= 10;
	}
	_putchar(result % 10 + '0');
}
