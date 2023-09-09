#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *array, *new_node;

    if(key == NULL || value == NULL)
    {
        return (0);
    }

	index = key_index((const unsigned char *)key, ht->size);

	array = ht->array[index];

	while(array)
	{
		if(strcmp(key, array->key) == 0)
		{
			free(array->value);
			array->value = strdup(value);
			if(array->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		array = array->next;
	}

	new_node = malloc(sizeof(hash_node_t *));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
