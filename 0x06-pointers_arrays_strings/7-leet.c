#include "main.h"

/**
 * leet - encodes a string into "1337" leet format.
 * @str: pointer to the string to be encoded.
 * Return: Returns pointer to resulting encoded string.
 */

char *leet(char *str)
{
	int i, j;
	char replace[] = "aAeEoOtTlL";
	char encoded[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; replace[j] != '\0'; j++)
		{
			if (str[i] == replace[j])
			{
				str[i] = encoded[j / 2];
				break;
			}
		}
	}
	return (str);
}
