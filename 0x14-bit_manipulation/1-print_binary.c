#include "main.h"

/**
 * print_binary - print the binary representation of an unsigned long integer.
 * @n: the unsigned long integer to be  printed in binary.
 *
 * Return: none (void function).
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit_position;
	int flag;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	bit_position = sizeof(unsigned long int) * 8 - 1;
	flag = 1;

	while (bit_position >= 1)
	{
		if (n & (1UL << bit_position))
		{
			flag = 0;
			_putchar('1');
		}
		else if (!flag)
			_putchar('0');
		bit_position--;
	}
}
