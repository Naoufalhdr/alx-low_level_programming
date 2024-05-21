#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list
 * @list: A pointer to the head of the skip list to search in
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located
 *         or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr;

	if (list == NULL)
		return (NULL);

	curr = list;

	/* Use express lane to find the block where the value may be */
	while (curr->express && curr->n < value)
	{
		list = curr;
		curr = curr->express;
		 printf("Value checked at index [%ld] = [%d]\n",
				 curr->index, curr->n);
	}

	/* If reached the end of express lane, traverse to the end */
	if (curr->express == NULL)
	{
		list = curr;
		while (curr->next)
			curr = curr->next;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			list->index, curr->index);

	/* Perform linear search within the identified block */
	while (list != curr->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
