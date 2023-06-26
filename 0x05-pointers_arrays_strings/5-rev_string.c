#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: string to be reversed.
 * Retunr: nothing.
 */

void rev_string(char *s)
{
	char r[10];
	int i, j, len;

	len = 0;

	for (i = 0; s[i]; i++)
		len += 1;
	for (i = len - 1, j = 0; i >= 0; i--, j++)
		r[j] = s[i];
	for (i = 0; s[i]; i++)
		s[i] = r[i];
}
