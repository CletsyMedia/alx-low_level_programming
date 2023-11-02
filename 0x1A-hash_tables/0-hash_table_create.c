#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 * @size: size of the hash table
 * Return: a pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	array = malloc(sizeof(hash_node_t *) * size);

	if (array == NULL)
	{
		free(ht);
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	ht->array = array;
	return (ht);
}
