#include "lists.h"

/**
 * free_listint - frees a linked list and releases all allocated memory.
 * @head: a pointer to the head of the listint_t list
 *
 * Return: none;
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
