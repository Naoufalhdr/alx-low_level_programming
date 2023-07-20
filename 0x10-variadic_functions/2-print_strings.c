#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to this function.
 * @...: a variable number of strings ((ellipsis).
 *
 * Return: none.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	char *str;
	unsigned int i;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_list);
}
