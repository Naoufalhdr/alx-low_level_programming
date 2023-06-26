#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line.
 * @s: string to reversed.
 * Return: nothing.
 */

void print_rev(char *s)
{
	int i, len;

	len = 0;

	for (i = 0; s[i]; i++)
		len += 1;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
