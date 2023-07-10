#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Creates a duplicate of a string.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL or if
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr = malloc((len + 1) * sizeof(char));
	if (ptr != NULL)
	{
		for (i = 0; i < len; i++)
			ptr[i] = str[i];
		ptr[i] = '\0';
		return (ptr);
	}
	else
		return (NULL);
}
