#include "lists.h"

/**
 * add_nodeint_end - adds a new node at  the end of a linked list.
 * @head: a double pointer to the head of the listint_t list
 * @n: the data value to be stored in the new node
 *
 * Return: if successful, the address of the new node;
 *         Otherwise, NULL if memory allocation fails or if head is NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *ptr;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}

	return (new_node);
}
