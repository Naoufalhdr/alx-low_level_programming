#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * count_words - count the words in the string.
 * @str: the string to be calculated.
 * @lenght: the lenght of the string.
 *
 * Return: the lenght of the word.
 */
int count_words(char *str, int lenght)
{
	int word_count = 0;
	int k = 0;

	while (k < lenght)
	{
		if (str[k] != ' ' && (k == 0 || str[k - 1] == ' '))
			word_count++;
		k++;
	}
	return (word_count);
}

/**
 * strtow - splits a string into words.
 * @str: the string to be split.
 *
 * Return: a pointer to an  array of strings (words) if successful,
 *         NULL otherwise.
 */
char **strtow(char *str)
{
	char **arr, *current = str;
	int i = 0, j = 0, k = 0, len = strlen(str), char_count, wc;

	wc = count_words(str, len);
	if (wc == 0 || len == 0)
		return (NULL);
	arr = malloc((wc + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (k < len)
	{
		if (str[k] != ' ' && (k == 0 || str[k - 1] == ' '))
		{
			while (str[k] != ' ' && str[k] != '\0')
			{
				char_count++;
				k++;
			}
			arr[j++] = malloc((char_count + 1) * sizeof(char));
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
			while (*current != ' ' && *current != '\0')
			{
				arr[i][j++] = *current;
				current++;
			}
			arr[i++][j] = '\0';
		}
	}
	arr[wc] = NULL;
	return (arr);
}
