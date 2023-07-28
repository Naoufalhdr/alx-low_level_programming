#include "lists.h"

/**
 * free_list - frees a linked list and releases all allocated memory.
 * @head: a pointer to the head of the linked list_t.
 *
 * Return: none.
 */
void free_list(list_t *head)
{
	list_t *current, *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
	head = NULL;
}

