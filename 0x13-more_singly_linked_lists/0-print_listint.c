#include "lists.h"

/**
 * print_listint - prints all the elements in a linked list
 * @h: a pointer to the head of the linked list
 *
 * Return: the number of nodes in  the linked list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t count;

	ptr = h;
	count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
