#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the size of  the memory to allocate.
 *
 * Return: a pointer to the allocated memory. If malloc fails, the function
 *         terminates the process with exit status 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
