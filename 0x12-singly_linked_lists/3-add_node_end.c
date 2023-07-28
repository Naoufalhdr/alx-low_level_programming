#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * _strlen - calculate the length of the string
  * @s: a string
  * Return: the length of the string
  */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - adds  a new node at the end of a linked list.
 * @head: a double pointer to the head of the linked list.
 * @str: a pointer to a string that needs to be duplicated and added to
 *       the new node.
 *
 * Return: if successful, the address of the new element,
 *         Otherwise, NULL if memory allocation fails or if head is NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	int len;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	len = _strlen(str);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}

