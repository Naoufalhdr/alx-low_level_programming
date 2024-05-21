#include "search_algos.h"
#include <math.h>


/**
 * jump_list - Searches for a value in a sorted singly linked list using
 *             Jump Search
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = (size_t) sqrt(size);
	size_t i;
	listint_t *prev = list, *curr = list;

	while (curr->next != NULL && curr->n < value)
	{
		prev = curr;
		for (i = 0; i < step && curr->next != NULL; i++)
			curr = curr->next;
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, curr->index);

	while (prev != NULL && prev->index <= curr->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
