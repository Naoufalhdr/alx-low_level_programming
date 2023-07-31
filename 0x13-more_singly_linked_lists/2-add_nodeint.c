#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head: a double pointer to the head of the listint_t list.
 * @n: the data value to be stored in the new node
 *
 * Return: if success, the address of the new node;
 *         otherwise, NULL if something went wrong.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
