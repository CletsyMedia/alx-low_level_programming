#include "lists.h"

/**
 * free_listp2_custom - frees a linked list
 * @head_ptr: head of a list.
 *
 * Return: no return.
 */
void free_listp2_custom(listp_t **head_ptr)
{
	listp_t *temp;
	listp_t *current;

	if (head_ptr != NULL)
	{
		current = *head_ptr;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head_ptr = NULL;
	}
}

/**
 * free_listint_safe_custom - frees a linked list.
 * @head: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe_custom(listint_t **head)
{
	size_t node_count = 0;
	listp_t *hptr, *new, *add;
	listint_t *current_node;

	hptr = NULL;
	while (*head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*head == add->p)
			{
				*head = NULL;
				free_listp2_custom(&hptr);
				return (node_count);
			}
		}

		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		node_count++;
	}

	*head = NULL;
	free_listp2_custom(&hptr);
	return (node_count);
}
