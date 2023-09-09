#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *node;

    if (key == NULL || value == NULL || ht == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
      node = malloc(sizeof(hash_node_t));
        if(node == NULL)
        return 0;
        node->key = strdup(key);
        node->value = strdup(value);
        node->next = NULL;
    if (ht->array[index] == NULL)
    {
    ht->array[index] = node;
    }
    else
    {
        if (strcmp(ht->array[index]->key, key) == 0)
        {
            free(ht->array[index]->value);
            ht->array[index]->value = strdup(value);
                if( ht->array[index]->value == NULL)
                    return 0;
            return 1; 
        }
       
        node->next = ht->array[index];
        ht->array[index] = node;
    return 1;
    }
    return 1;

}
