#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	len = strlen(str);
	
	if (str == NULL)
		return (NULL);

	ptr = malloc(len * sizeof(char));
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
