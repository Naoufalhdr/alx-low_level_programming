#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: a pointer to the pointer that needs to be modified.
 * @to: a pointer to the char that 's' should point to.
 * Return: none.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
