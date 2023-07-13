#include "main.h"
#include <stdlib.h>


/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: a pointer to the memory block to be reallocated.
 * @old_size:  size of the currently allocated memory block.
 * @new_size: new  size of the memory block to be reallocated.
 *
 * Return: a pointer to the reallocated memory block,
 *         or NULL on failure or when new_size is 0.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned char *char_p;
	unsigned char *char_ptr;
	unsigned int i;	
	
	if (new_size == 0 )
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		char_p = (unsigned char *)p;
		char_ptr = (unsigned char *)ptr;
		if (new_size > old_size)
		{
			for (i = 0; i < old_size; i++)
				char_p[i] = char_ptr[i];
		}
		else
		{
			for (i = 0; i < new_size; i++)
				char_p[i] = char_ptr[i];
		}
	}

	return (p);
}
