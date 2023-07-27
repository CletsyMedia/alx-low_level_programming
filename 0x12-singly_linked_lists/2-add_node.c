#include "lists.h"
#include <stdlib.h>
/**
 * _strlen - Gets the length of the string.
 * @s: Pointer to the input string.
 *
 * Return: Length of the string.
 */
int _strlen(const char *s)
{
	int i;

	/* Loop through the string until the null terminator is encountered */
	for (i = 0; s[i]; i++)
		;

	/* Return the length of the string i.e number of characters*/
	return (i);
}
/**
 * add_node - Adds new nodes to the beginning of the list.
 * @head: Pointer to the current place in the list.
 * @str: String to add to the head.
 *
 * Return: Pointer to the current position in the list (new head).
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *content;
	list_t *new;

	/* Check if the input string or the head pointer is NULL */
	if (str == NULL || head == NULL)
		return (NULL);

	/* Get the length of the input string */
	len = _strlen(str);

	/* Allocate memory for the content of the new node (string) */
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);

	/* Copy the input string to the content of the new node */
	for (i = 0; str[i]; i++)
		content[i] = str[i];
	content[i] = '\0'; /* Add null terminator to the content string */

	/* Allocate memory for the new node structure */
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}

	/* Set the members of the new node structure */
	new->str = content;
	new->len = len;
	new->next = *head;

	/* Update the head pointer to point to the new node */
	*head = new;

	/* Return the new head of the linked list (current position in the list) */
	return (new);
}
