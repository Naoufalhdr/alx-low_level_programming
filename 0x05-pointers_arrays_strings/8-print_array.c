#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array of integers.
 * @a: the array of elements.
 * @n: the number of elements of the array to be printed.
 * Return: nothing.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (a[i] != a[n - 1])
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
}
