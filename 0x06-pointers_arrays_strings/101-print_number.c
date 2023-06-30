#include "main.h"

/**
 * print_number - Prints an integer value.
 * @n: The integer value to be printed.
 */

void print_number(int n)
{
	int num, t;
	int i, size, power;

	size = 0;
	power = 1;
	num = t = n;

	if (n < 0)
	{
		_putchar('-');
		num = t = -n;
	}

	while (t / 10 > 0)
	{
		t /= 10;
		power *= 10;
		size++;
	}
	for (i = 0; i <= size; i++)
	{
		_putchar((num / power) + '0');
		num %= power;
		power /= 10;
	}
}
