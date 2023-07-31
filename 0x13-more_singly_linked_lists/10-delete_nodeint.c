#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index in the list.
 * @head: a double pointer to the head  of the listint_t list
 * @index: index of the node that should be deleted, index starts at 0.
 *
 * Return: 1 if the deletion succeeded;
 *         -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	count = 0;
	current = *head;

	while (count < index && current != NULL)
	{
		prev = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	if (index == 0)
		*head = (*head)->next;
	else
		prev->next = current->next;
	free(current);

	return (1);
}
