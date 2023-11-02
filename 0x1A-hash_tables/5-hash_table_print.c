#include "hash_tables.h"

/**
 * hash_table_print - Prints the keys and values of the hash table
 * @ht: A pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
  unsigned long int i;
  /* A flag to check if any entry has been printed */
  int printed = 0;
  hash_node_t *node;

  if (ht == NULL)
    return;

  printf("{");
  for (i = 0; i < ht->size; i++)
  {
    node = ht->array[i];
    while (node != NULL)
    {
      if (printed)
        printf(", ");
      printf("'%s': '%s'", node->key, node->value);
      printed = 1;
      node = node->next;
    }
  }
  printf("}\n");
}
