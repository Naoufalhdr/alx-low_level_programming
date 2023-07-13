#include "main.h"
#include <stdlib.h>


/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the number of elements in the array.
 * @size: the size of each element in bytes.
 *
 * Return: a pointer to the allocated memory for the array.
 *         If nmemb or size is 0, the function returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
