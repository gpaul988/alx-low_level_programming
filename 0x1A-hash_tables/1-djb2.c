#include "hash_tables.h"

/**
 * hash_djb2 - Performs the djb2 hash algorithm.
 * @str: String to hash.
 *
 * Return: Intended hash value.
 */

ulint __hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
