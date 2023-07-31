#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely.
 * @head: a pointer to the head of the linked list
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	const listint_t **address_set = NULL;
	size_t set_size = 0, i;

	while (current != NULL)
	{
		for (i = 0; i < set_size; i++)
		{
			if (current == address_set[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				free(address_set);
				exit(98);
			}
		}

		address_set = realloc(address_set, (set_size + 1) * sizeof(*address_set));
		if (address_set == NULL)
		{
			printf("Memory allocation failed.\n");
			exit(98);
		}
			address_set[set_size] = current;
			set_size++;

			printf("[%p] %d\n", (void *)current, current->n);
			current = current->next;
			count++;
	}

	free(address_set);
	return (count);
}
