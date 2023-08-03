#include "main.h"

/**
 * binary_to_uint - convert a binary string to an unsigned integer.
 * @b: a  pointer to a string containing a binary number
 *
 * Return: the converted unsigned integer;
 *         or 0 if:
 *         there is one or more characters in the string b that is not 0 or 1
 *         or if @b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, pos;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	result = 0;
	pos = 1;

	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			result += pos;
		pos *= 2;
	}

	return (result);
}
