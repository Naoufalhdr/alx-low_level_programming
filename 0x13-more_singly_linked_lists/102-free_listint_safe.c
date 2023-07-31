#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: a pointer to a pointer  to the head of the linked list.
 *
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t count;

	current = *h;
	count = 0;

	while (current != NULL)
	{
		if (current <= current->next)
		{
			*h = NULL;
			exit(98);
		}
		tmp = current->next;
		free(current);
		count++;
		current = tmp;
	}

	*h = NULL;

	return (count);
}
