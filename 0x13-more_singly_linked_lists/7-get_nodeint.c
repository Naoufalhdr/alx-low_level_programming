#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the head of the linked  list.
 * @index: the  index of the node, starting at 0.
 *
 * Return: if the node exists, return a pointer to the nth node;
 *         Otherwise, return NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count;

	ptr = head;
	count = 0;

	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);
		ptr = ptr->next;
		count++;
	}

	return (NULL);
}
