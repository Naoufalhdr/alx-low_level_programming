#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed  to the function.
 * @...: a variable number of strings ((ellipsis).
 *
 * Return: none.
 */

void print_all(const char * const format, ...)
{
	va_list arg_list;
	char *separator, *str;
	char format_type;
	int i = 0;

	va_start(arg_list, format);
	separator = "";

	while (format[i])
	{
		format_type = format[i];

		switch (format_type)
		{
			case 'c':
				printf("%s%c", separator, va_arg(arg_list, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg_list, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg_list, double));
				break;
			case 's':
				str = va_arg(arg_list, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s%s", separator, str);
				break;
			default:
				break;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(arg_list);
}
