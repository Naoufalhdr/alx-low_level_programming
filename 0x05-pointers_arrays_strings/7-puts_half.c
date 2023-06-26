#include "main.h"

/**
 * puts_half - print out half of a string.
 * @str: string to be printed.
 * Return: nothing.
 */

void puts_half(char *str)
{
	int i, len;

	len = 0;

	for (i = 0; str[i]; i++)
		len++;

	for (i = len / 2; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
