#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to this function.
 * @...: a variable number of integers (ellipsis).
 *
 * Return: none.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_list, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_list);
}
