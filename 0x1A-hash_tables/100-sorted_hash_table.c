#include "sorted_hash_tables.h"
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *	Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
  shash_table_t *ht;
  unsigned long int i;

  ht = malloc(sizeof(shash_table_t));
  if (ht == NULL)
    return (NULL);

  ht->size = size;
  ht->array = malloc(sizeof(shash_node_t *) * size);
  if (ht->array == NULL)
    return (NULL);
  for (i = 0; i < size; i++)
    ht->array[i] = NULL;
  ht->shead = NULL;
  ht->stail = NULL;

  return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table you want to add or update the key/value to.
 * @key: The key. Key cannot be an empty string.
 * @value: The value associated with the key. Value must be duplicated.
 * Value can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
  unsigned long int index;
  shash_node_t *new_node, *current, *prev = NULL;

  if (ht == NULL || key == NULL || *key == '\0')
    return (0);

  index = key_index((unsigned char *)key, ht->size);
  current = ht->array[index];

  while (current)
  {
    if (strcmp(current->key, key) == 0)
    {
      char *new_value = strdup(value);

      if (new_value == NULL)
        return (0);

      free(current->value);
      current->value = new_value;
      return (1);
    }

    if (strcmp(current->key, key) > 0)
      break;

    prev = current;
    current = current->next;
  }

  new_node = malloc(sizeof(shash_node_t));
  if (new_node == NULL)
    return (0);
  new_node->key = strdup(key);
  new_node->value = strdup(value);

  if (new_node->key == NULL || new_node->value == NULL)
  {
    free(new_node->key);
    free(new_node->value);
    free(new_node);
    return (0);
  }

  new_node->next = current;

  if (prev)
    prev->next = new_node;
  else
    ht->array[index] = new_node;

  if (!current || strcmp(current->key, key) > 0)
  {
    new_node->snext = current;
    new_node->sprev = prev;

    if (prev)
      prev->snext = new_node;
    if (current)
      current->sprev = new_node;
    if (!prev)
      ht->shead = new_node;
    if (!current)
      ht->stail = new_node;
  }
  else if (!prev && current)
  {
    new_node->snext = current;
    new_node->sprev = NULL;
    current->sprev = new_node;
    ht->shead = new_node;
  }

  return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key from the sorted hash table.
 * @ht: The sorted hash table to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element, or NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
  unsigned long int index;
  shash_node_t *current;

  if (ht == NULL || key == NULL || *key == '\0')
    return (NULL);

  index = key_index((unsigned char *)key, ht->size);
  current = ht->array[index];

  while (current)
  {
    if (strcmp(current->key, key) == 0)
      return (current->value);
    current = current->next;
  }

  return (NULL);
}

/**
 * shash_table_print - Prints the keys and values of the sorted hash table
 * in ascending order of keys.
 * @ht: A pointer to the sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
  shash_node_t *node = ht->shead;
  int printed = 0;

  if (ht == NULL)
    return;

  printf("{");
  while (node)
  {
    if (printed)
      printf(", ");
    printf("'%s': '%s'", node->key, node->value);
    printed = 1;
    node = node->snext;
  }
  printf("}\n");
}

/**
 * shash_table_print_rev - Prints the keys and values of the sorted hash table
 * in descending order of keys.
 * @ht: A pointer to the sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
  shash_node_t *node = ht->stail;
  int printed = 0;

  if (ht == NULL)
    return;

  printf("{");
  while (node)
  {
    if (printed)
      printf(", ");
    printf("'%s': '%s'", node->key, node->value);
    printed = 1;
    node = node->sprev;
  }
  printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table.
 * @ht: A pointer to the sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
  shash_node_t *node, *temp;

  if (ht == NULL)
    return;

  node = ht->shead;
  while (node)
  {
    temp = node;
    node = node->snext;
    free(temp->key);
    free(temp->value);
    free(temp);
  }

  free(ht->array);
  free(ht);
}
