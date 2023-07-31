#include "lists.h"

/**
 * listint_len - calculate the number of elements in the linked list.
 * @h: a pointer to the head of the linked list
 *
 * Return: the number of elements in the linked  list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t count;

	ptr = h;
	count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
