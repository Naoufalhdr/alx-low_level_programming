#include "lists.h"
#include <stdio.h>

/**
 * print_before_main - a function annotated with __attribute__((constructor))
 *                     that is automatically executed before the main function.
 *
 * Return: none.
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

