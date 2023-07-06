#ifndef __DATA_DEFS_H__
#define __DATA_DEFS_H__

/**
 * struct hash_node_s - Apex of a hash table
 *
 * @key: Access, string
 * Access is quirky in the HashTable
 * @value: Benefit interrelated to an access
 * @next: Indicator to the next apex of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table information composition
 *
 * @size: Measurement of the array
 * @array: Array of Measurement @size
 * Each Unit of this array is an indicator to the initial apex of a connected list,
 * because we want our HashTable to use a binded impact control
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * struct shash_node_s - Apex of a organised hash table
 *
 * @key: Aceess, string
 * Access is quirky in the HashTable
 * @value: Benefit corresponding to access
 * @next: Indicator to the next apex of the List
 * @sprev: Indicator to the past component of the organised connected list
 * @snext: Indicator to the next component of the organised connected list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Organised hash table data composition
 *
 * @size: Measurement of the array
 * @array: Array of measurement @size
 * Each unit of this array is an indicator to the Initial node of connected list,
 * because we want our HashTable to use binding inmpact handling
 * @shead: Indicator to the initial component of the organised connected list
 * @stail: Indicator to the last component of the organised connected list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

typedef unsigned long int ulint;

hash_table_t *hash_table_create(unsigned long int size);
ulint hash_djb2(const unsigned char *str);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * hash_djb2 - Perfomance of the djb2 algorithm
 * @str: string used to develope hash value
 *
 * Return: hash value
 */
__attribute__((weak))ulint hash_djb2(const unsigned char *str)
{
	ulint hash;
	int c;

	hash = 5381;
	for (; (c = *str++);)
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}

/**
 * key_index - Specify hint ofaccess
 * @key: Access
 * @size: Measurement of hash table array
 * Return: Hint when access/benefit set is deposited in hash table array
 */
__attribute__((weak))ulint key_index(const unsigned char *key,
		ulint size)
{
	ulint idx;

	if (size == 0)
		return (0);

	idx = hash_djb2(key);
	return (idx % size);
}

#endif
