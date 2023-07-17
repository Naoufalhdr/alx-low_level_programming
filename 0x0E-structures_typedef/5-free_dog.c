#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory allocated for a dog structure
 * @d: a pointer to the dog structure to be freed
 *
 * Return: none.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
