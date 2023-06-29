#include "main.h"

/**
 * cap_string - capitalizes the first letter of each word in a string.
 * @str: a pointer to the string to be capitalized.
 * Return: a pointer to the resulting capitalized string.
 */

char *cap_string(char *str)
{
	int i, j, delt;
	char array[13] = {
		' ', '\n',  ',', ';', '!', '?', '"',
		'(', ')', '.', '{', '\t', '}'};
	i = 0;

	delt = 'a' - 'A';

	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == array[j])
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= delt;
		}
		i++;
	}
	return (str);
}
