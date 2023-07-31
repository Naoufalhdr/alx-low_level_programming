#include "lists.h"

/**
 * free_listint2 - frees a linked list and set the head to NULL.
 * @head: a double pointer to the head of the listint_t list
 *
 * Return: none;
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;

	if (head == NULL || *head == NULL)
		return;

	current = *head;
	next_node = NULL;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*head = NULL;
}
