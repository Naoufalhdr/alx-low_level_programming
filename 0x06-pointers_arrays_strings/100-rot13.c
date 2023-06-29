#include "main.h"

/**
 * rot13 - encodes a string using the "ROT13" code.
 * @str: a pointer to the string to be encoded.
 * Return: a pointer to the resulting encoded string.
 */

char *rot13(char *str)
{
	char upper[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char lower[] = "nopqrstuvwxyzabcdefghijklm";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];

		if (c >= 'A' && c <= 'Z')
		{
			int delt = c - 'A';

			str[i] = upper[delt];
		}
		else if (c >= 'a' && c <= 'z')
		{
			int delt = c - 'a';

			str[i] = lower[delt];
		}
	}
	return (str);
}
