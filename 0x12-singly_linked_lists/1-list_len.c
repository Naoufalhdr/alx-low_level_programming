#include "lists.h"

/**
 * list_len - returns the number of elements 'nodes' in a linked list.
 * @h: a pointer to the head of the linked list (list_t).
 *
 * Return: the number of nodes in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
