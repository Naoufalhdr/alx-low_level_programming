#include "lists.h"
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
 * add_node - adds a new node  at the beginning of a linked list.
 * @head: a double pointer to the head of the linked list_t
 * @str: a pointer to a string that needs to be duplicated and added
 *       to the new node.
 *
 * Return: if successful, the address of the new element,
 *         Otherwise, NULL if memory allocation fails or if head is NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len, i;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	len = _strlen(str);
	new_node->str = malloc((len + 1) * sizeof(char));
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; i < len; i++)
		new_node->str[i] = str[i];

	new_node->str[len] = '\0';
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
