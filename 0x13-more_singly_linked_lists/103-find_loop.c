#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: a pointer to the head of the linked list
 *
 * Return: the address of the node where the loop starts;
 *         or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1, *ptr2;

	ptr1 = ptr2 = head;

	while (ptr1 != NULL && ptr1->next != NULL)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;

		if (ptr1 == ptr2)
		{
			ptr2 = head;
			while (ptr1 != ptr2)
			{
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}
			return (ptr2);
		}
	}

	return (NULL);
}
