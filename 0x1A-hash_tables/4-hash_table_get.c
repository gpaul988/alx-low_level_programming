#include "hash_tables.h"

/**
 * hash_table_get - Permits access, accepts benefit
 * @ht: Hash table
 * @key: Access
 * Return: Benefit; or NULL if not found
 */
char *hash_table_get(const table_t *ht, const char *key)
{
	ulint idx;
	node_t *tmp;

	/* Search for hint in hash table where access is */
	/* search through connected list to get  matching access for benefit */

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);

	tmp = (ht->array)[idx];
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	else
		return (tmp->value);
}
