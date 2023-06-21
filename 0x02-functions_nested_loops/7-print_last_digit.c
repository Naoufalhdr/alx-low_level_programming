#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @i : an integer whose last digit is to be printed.
 * Return: the value of the last digit.
 */
int print_last_digit(long i)
{
	if (i < 0)
		i *= -1;
	_putchar((i % 10) + '0');
	return (i % 10);
}
