#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sumof the two diagonals of square matrix.
 * @a: a pointer to the start of the square matrix.
 * @size: size of the square matrix.
 * Return: none.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int left_diag = 0;
	int right_diag = 0;

	for (i = 0; i < size; i++)
	{
		left_diag += a[i * size + i];
		right_diag += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", left_diag, right_diag);
}
