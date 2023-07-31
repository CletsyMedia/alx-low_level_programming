#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 *
 * @h: Pointer to the head of the singly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
    size_t nodeCount = 0;

    /* Traverse the linked list using a while loop */
    while (h)
    {
        /* Move to the next node in the list */
        h = h->next;

        /* Increment the element nodeCount */
        nodeCount++;
    }

    /* Return the total number of elements in the list */
    return nodeCount;
}


