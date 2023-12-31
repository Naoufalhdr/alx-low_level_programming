#include "main.h"

/**
 * _strncpy - copies a specified number of char from src to dest.
 * @dest: pointer to the destination string.
 * @src: pointer to the source string.
 * @n: the maximum number of char to copy from src.
 * Return: a pointer to the resulting copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
