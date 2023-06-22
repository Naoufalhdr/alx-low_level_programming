#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal.
 * @n: the number of times the character '\' should be printed
 * Return: nothing.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
