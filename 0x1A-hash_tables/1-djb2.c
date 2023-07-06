#include "hash_tables.h"

/**
 * __hash_djb2 - Execution of djb2 algorithm
 * @str: Loop used to develope hash value
 * 
 * Return: hash value
 */
ulint __hash_djb2(const unsigned char *str)
{
	ulint hash;
	int c;

	hash = 5381;
	for (; (c = *str++);)
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
