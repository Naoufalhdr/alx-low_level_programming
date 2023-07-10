#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * strtow - splits a string into words.
 * @str: the string to be split.
 *
 * Return: a pointer to an  array of strings (words) if successful,
 *         NULL otherwise.
 */

char **strtow(char *str)
{
	char **arr;
	char *current = str;
	int i, j, k, len, char_count, word_count;

	word_count = char_count = i = j = k = 0;
	len = strlen(str);

	if (str == NULL)
		return (NULL);
	while (k < len)
	{
		if (str[k] != ' ' && (k == 0 || str[k - 1] == ' '))
			word_count++;
		k++;
	}
	arr = malloc((word_count + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	k = 0;
	while (k < len)
	{
		if (str[k] != ' ' && (k == 0 || str[k - 1] == ' '))
		{
			while (str[k] != ' ')
			{
				char_count++;
				k++;
			}
			arr[j] = malloc((char_count + 1) * sizeof(char));
			j++;
		}
		char_count = 0;
		k++;
	}
	while (*current != '\0')
	{
		j = 0;
		if (*current == ' ')
			current++;
		else
		{
			while (*current != ' ')
			{
				arr[i][j] = *current;
				current++;
				j++;
			}
			arr[i][j] = '\0';
			i++;
		}
	}
	arr[word_count] = NULL;
	return (arr);
}

