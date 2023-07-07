#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *node;
    unsigned long int index;

    if (ht == NULL || key == NULL)
    {
        return (NULL);
    }
    index = hash_djb2((const unsigned char *)key) % 10;
    if (index >= ht->size)
    {
        return (NULL);
    }

    node = ht->array[index];
    while(node)
    {
        if (strcmp(key, node->key) != 0)
        {
            node = node->next;
        }
    }
    return ((node == NULL) ? NULL : node->value);
}
