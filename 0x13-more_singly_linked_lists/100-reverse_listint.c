#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a double pointer to the head of the linked list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;
	prev = NULL;

	while (current != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	*head = prev;

	return (*head);
}
