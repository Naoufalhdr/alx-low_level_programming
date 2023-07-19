#include "function_pointers.h"

/**
 * print_name - print a name using function pointer.
 * @name: the name to be printed.
 * @f: a function pointer that takes a character pointer as an argument.
 *
 * Return: none.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
