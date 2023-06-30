#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers represented as strings together.
 * @n1: the first number as a string.
 * @n2: the second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 * Return: a pointer to buffer where result is stored.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int remain, i, j, len_n1, len_n2, max, sum;

	len_n1 = len_n2 = remain = sum = i = j = 0;
	max = size_r - 1;

	while (n1[len_n1] != '\0')
		i = len_n1++;
	while (n2[len_n2] != '\0')
		j = len_n2++;

	while (i >= 0 || j >= 0)
	{
		int num1 = (i >= 0) ? n1[i] - '0' : 0;
		int num2 = (j >= 0) ? n2[j] - '0' : 0;

		sum = num1 + num2 + remain;
		remain = sum / 10;
		r[max] = '0' + (sum % 10);
		i--;
		j--;
		max--;
	}

	if (remain != 0)
		r[max] = remain + '0';
	else
		max += 1;

	r[size_r] = '\0';

	if (size_r == len_n1 || size_r == len_n2)
		return (0);
	else
		return (&r[max]);
}
