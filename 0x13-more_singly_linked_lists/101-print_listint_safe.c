#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely.
 * @head: a pointer to the head of the linked list
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *after;
	size_t count;

	if (head == NULL)
		exit(98);

	count = 0;
	current = after = head;

	while (current != NULL && after != NULL && after->next != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		after = after->next->next;
		if (current == after)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			printf("-> [%p] %d\n", (void *)after->next, after->next->n);
			break;
		}
		count++;
	}

	if (current == after)
		exit(98);

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		count++;
	}
	return (count);
}
