#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely.
 * @head: a pointer to the head of the linked list
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count;

	current = head;
	count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}
		current = current->next;
	}

	return (count);
}
