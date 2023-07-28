#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton tasks
 */
/* Node structure */
typedef struct list_s
{
	char *str;	/* Points to a dynamically allocated string */
	unsigned int len;	/* Length of the string */
	struct list_s *next;	/* Points to the next node in the list */
} list_t;

/* Function prototypes */
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);
size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
size_t list_len(const list_t *h);

#endif /* LIST_H */
