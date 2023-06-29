#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the elements of an integer array.
 * @a: a pointer to the array of integers.
 * @n: the number of the elements in the array.
 * Return: none.
 */

void reverse_array(int *a, int n)
{
	int temp, i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
