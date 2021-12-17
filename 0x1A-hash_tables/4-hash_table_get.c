/*
 *Sangwani P Zyambo <sangwanizyambo@gmail.com>
 */

#include "hash_tables.h"

/**
 * hash_table_get - retrieves an element from the hash tbale
 * thats asscoiated with the given key
 * @ht: The hash table to retrieve an elemnt from
 * @key: the key to look for
 *
 * Return: success - the value associated with key
 * failure - NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hashIndex;
	hash_node_t *element;

	hashIndex = key_index((const unsigned char *)key, ht->size);
	element = ht->array[hashIndex];

	/*Ensure that we move to a non NUL value*/
	if (element != NULL)
	{
		if (strcmp(element->key, key) == 0)
			return (element->value);
	}
	return (NULL);
}
