#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table.
 * @size: is the size of the array.
 *
 * Return: A pointer to the newly created hash table;
 *         otherwise NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->size = size;

	return (ht);
}
