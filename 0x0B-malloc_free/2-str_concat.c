#include "main.h"
#include <stdlib.h>


/**
 * str_concat - concatenates two strings.
 * @s1: the first  string.
 * @s2: the second  string.
 *
 * Return: a pointer to the concatenated string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, len1, len2;

	len1 = len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	ptr = malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr != NULL)
	{
		for (i = 0; i < len1 + len2; i++)
		{
			if (i < len1)
				ptr[i] = s1[i];
			else
				ptr[i] = s2[i - len1];
		}
		ptr[i] = '\0';
		return (ptr);
	}
	else
		return (NULL);
}
