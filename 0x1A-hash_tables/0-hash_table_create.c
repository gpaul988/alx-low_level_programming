#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Developes  hash table.
 * @size: Measurement of the array in the hash table.
 *
 * Return: Indicator to the freshly developedd hash table, or NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	/* Grant memory for the hash table */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/* Grant memory for the array of hash table component */
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	/* Boot each component of the array to NULL */
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	hash_table->size = size;

	return (hash_table);
}
