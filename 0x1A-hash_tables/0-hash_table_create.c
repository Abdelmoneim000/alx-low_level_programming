#include "hash_tables.h"
/*
 * hash_table_create - a function to create a hash table using linked list
 * @size: the size of the array to be created with.
 *
 * Return: an array to the hash table or Null if something goes wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
