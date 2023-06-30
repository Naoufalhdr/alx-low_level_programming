#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer value.
 * @n: The integer value to be printed.
 */

void print_number(int n)
{
	unsigned int num, temp;
	int i, size, power;

	size = 0;
	power = 1;
	num = n;
	temp = n;

	if (n < 0)
	{
		_putchar('-');
		num = temp = -n;
	}

	while (temp / 10 > 0)
	{
		temp /= 10;
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
