#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes_freed = 0;
	listp_t *freed_nodes = NULL;
	listp_t *new_node, *check_node;
	listint_t *current;

	freed_nodes = NULL;
	while (*h != NULL)
	{
		new_node = malloc(sizeof(listp_t));
		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)*h;
		new_node->next = freed_nodes;
		freed_nodes = new_node;

		check_node = freed_nodes;
		while (check_node->next != NULL)
		{
			check_node = check_node->next;
			if (*h == check_node->p)
			{
				*h = NULL;
				free_listp2(&freed_nodes);
				return (nodes_freed);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		nodes_freed++;
	}

	*h = NULL;
	free_listp2(&freed_nodes);
	return (nodes_freed);
}
