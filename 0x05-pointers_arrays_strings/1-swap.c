#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first number to swap.
 * @b: second number to swap.
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

