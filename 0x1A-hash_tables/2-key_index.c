#include "hash_tables.h"

/**
 * __key_index - Permits hints of access
 * @key: Access
 * @size: Measurement of hash table array
 * Return: Hint where accesss/benefits set is deposited in hash table array
 */
ulint __key_index(const unsigned char *key, ulint size)
{
	ulint idx;

	if (size == 0)
		return (0);

	idx = hash_djb2(key);
	return (idx % size);
}
