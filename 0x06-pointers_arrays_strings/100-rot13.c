#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using the "ROT13" code.
 * @str: a pointer to the string to be encoded.
 * Return: a pointer to the resulting encoded string.
 */

char *rot13(char *str)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}
	return (str);
}
