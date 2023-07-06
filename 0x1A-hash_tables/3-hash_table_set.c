#include "hash_tables.h"

/**
 * create_and_add_node - Put benefits, and add apex into hash table
 * @ht: Hash table
 * @key: Access; won't be a void string
 * @value: Benefits
 * @idx: Hint to add in at hash table
 * Return: 1 success, 0  fail
 */
int create_and_add_node(table_t *ht, const char *key, const char *value,
			ulint idx)
{
	node_t *node = NULL;
	char *k;
	char *v;

	node = malloc(sizeof(node_t));
	if (!node)
		return (0);

	k = strdup(key);
	if (!k)
	{
		free(node);
		return (0);
	}

	v = strdup(value);
	if (!v)
	{
		free(k);
		free(node);
		return (0);
	}

	node->key = k;
	node->value = v;

	if ((ht->array)[idx] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[idx];
	(ht->array)[idx] = node;

	return (1);
}

/**
 * hash_table_set - Include component to hash table
 * @ht: Hash table
 * @key: Access; won't be a void string
 * @value: Benefit
 * Return: 1 success, 0  fail
 */
int hash_table_set(table_t *ht, const char *key, const char *value)
{
	/* Accept Hint */
	/* if access already there, modernize benefits and retrieve */
	/* else Develop apex */
	/* Pair ht idx ptr to apex; else include apex to the beginning of impact */

	ulint idx;
	node_t *node = NULL;
	char *v;

	if (!ht || !(ht->array) || !key || !strlen(key) || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[idx];
	while (node && (strcmp(key, node->key) != 0))
		node = node->next;
	if (node)
	{
		v = strdup(value);
		if (!v)
			return (0);
		if (node->value)
			free(node->value);
		node->value = v;
		return (1);
	}

	return (create_and_add_node(ht, key, value, idx));
}
