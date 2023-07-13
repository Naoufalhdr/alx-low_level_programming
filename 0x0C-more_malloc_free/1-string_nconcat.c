#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the number of bytes from s2 to concatenate.
 *
 * Return: a pointer to the newly allocated memory containing the concatenated
 *         string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_len = 0, s2_len = 0;
	unsigned int size = s1_len + s2_len + 1;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	if (s2_len >= n)
		s2_len = n;

	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		str[i] = s1[i];
	for (i = 0; i < s2_len; i++)
		str[i + s1_len] = s2[i];
	str[i + s1_len] = '\0';

	return (str);
}
