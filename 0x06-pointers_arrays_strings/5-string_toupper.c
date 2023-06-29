#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 * @str: a pointer to the string to be converted.
 * Return: a pointer to the resulting converted string.
 */

char *string_toupper(char *str)
{
	int i, delt;

	delt = 'a' - 'A';

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= delt;
	}
	return (str);
}
