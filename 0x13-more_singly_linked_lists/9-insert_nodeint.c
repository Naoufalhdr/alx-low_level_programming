#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in the list
 * @head: a double  pointer to the head of the listint_t list.
 * @idx: the index where the new node should be added. Index starts at 0.
 * @n: a value to be  stored in the new node.
 *
 * Return: If success, return the address of the new node;
 *         Otherwise, return NULL if it failed.
 *         If the list is empty and idx is 0, the new node will become
 *         the new head of the list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ptr;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	ptr = *head;

	while (idx > 1 && ptr != NULL)
	{
		ptr = ptr->next;
		idx--;
	}

	if (ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
