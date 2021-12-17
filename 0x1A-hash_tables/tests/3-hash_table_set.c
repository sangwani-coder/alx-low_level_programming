#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key. it can not be empty
 * @value: value associated with the key. value must be duplicated
 * value can be an empty string.
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hashIndex, i;
	hash_node_t *node;
	char *copy_val;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy_val = strdup(value);
	if (copy_val == NULL)
		return (0);

	hashIndex = key_index((const unsigned char *)key, ht->size);
	for (i = hashIndex; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy_val;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(copy_val);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = copy_val;
	node->next = ht->array[hashIndex];
	ht->array[hashIndex] = node;

	return (1);
}
