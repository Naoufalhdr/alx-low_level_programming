#include "main.h"
#include <stdio.h>

/**
 * puts_half - print out half of a string.
 * @str: string to be printed.
 * Return: nothing.
 */

void puts_half(char *str)
{
	int i, n, len;

	len = 0;

	for (i = 0; str[i]; i++)
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	for (i = n; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
