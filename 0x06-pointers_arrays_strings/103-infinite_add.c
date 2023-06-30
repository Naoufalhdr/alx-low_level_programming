#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers represented as strings together.
 * @n1: the first number as a string.
 * @n2: the second number as a string.
 * @r: The buffer to store the result.
 * @size_r: a pointer to buffer where result is stored
 * Return: return
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int remain, sum, i, j;
	int len_n1 = 0;
	int len_n2 = 0;
	int max = size_r - 1;

	remain = i = j = 0;

	while (n1[len_n1] != '\0')
		i = len_n1++;
	while (n2[len_n2] != '\0')
		j = len_n2++;

	while (i >= 0 || j >= 0)
	{
		int num1, num2;

		if (i < 0)
			num1 = 0;
		else
			num1 = n1[i] - '0';
		if (j < 0)
			num2 = 0;
		else
			num2 = n2[j] - '0';
		sum = num1 + num2 + remain;
		remain = sum  / 10;
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

	if (max == 0)
		return (0);
	return (&r[max]);
}
