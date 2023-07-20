#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of a variable number of arguments.
 * @n: the number of integers to be summed.
 * @...: a variable number of integers (ellipsis).
 *
 * Return: the sum of all integers.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i, sum;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg_list, int);
	va_end(arg_list);

	return (sum);
}
