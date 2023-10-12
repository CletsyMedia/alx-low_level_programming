#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 *                          dlistint_t list.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Data to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
  unsigned int count;
  dlistint_t *current;
  dlistint_t *new_node;

  if (!h)
    return (NULL);

  current = *h;

  if (idx == 0)
    return (add_dnodeint(h, n)); /* Insert at the beginning */

  for (count = 0; current && count < idx - 1; count++)
  {
    current = current->next;
  }

  if (!current || count != idx - 1)
    return (NULL); /* Index out of range */

  new_node = malloc(sizeof(dlistint_t));
  if (!new_node)
    return (NULL);

  new_node->n = n;
  new_node->prev = current;
  new_node->next = current->next;

  if (current->next)
    current->next->prev = new_node;

  current->next = new_node;

  return (new_node);
}
