#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: a double pointer to the head of the listint_t list
 *
 * Return: if the linked list is empty, return 0;
 *         Otherwise, return the data (n) of the deleted head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	ptr = *head;
	data = ptr->n;
	*head = ptr->next;
	free(ptr);

	return (data);
}
