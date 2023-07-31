#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: a pointer to the head of the linked list.
 *
 * Return: the sum of all the data (n) in the linked list.
 *         If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	if (head == NULL)
		return (0);

	ptr = head;
	sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
