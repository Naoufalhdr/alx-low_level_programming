#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments of a  program into a single string.
 * @ac: the number of  arguments.
 * @av: an array of  strings containing the arguments.
 *
 * Return: a pointer to the newlycreated string,
 *         or NULL if it fails to allocate the memory or  if the number of
 *         arguments is 0.
 */

char *argstostr(int ac, char **av)
{
	int i, index, len;
	char *ptr;

	len = index = 0;

	for (i = 0; i < ac; i++)
	{
		char *current = av[i];

		while (*current != '\0')
		{
			len++;
			current++;
		}
		len++;
	}

	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char *current = av[i];

		while (*current != '\0')
		{
			ptr[index++] = *current;
			current++;
		}
		ptr[index++] = '\n';
	}

	ptr[index] = '\0';

	return (ptr);
}

