#include "main.h"

/**
 * _strchr - locates the first occurence of a character in the string.
 * @s: pointer to the string to be searched.
 * @c: the character to be located.
 * Return: a pointer to the first occurence of the character in the string.
 *   or a NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; s++)
	{
		if (s[i] == c)
			return (s);
	}
	return (0);
}
