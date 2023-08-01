#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1;
	listint_t *ptr2;

	ptr1 = head;
	ptr2 = head;
	for (; head && ptr2 && ptr2->next;)
	{
	head = head->next;
	ptr2 = ptr2->next->next;

	if (head == ptr2)
	{
	head = ptr1;
	ptr1 =	ptr2;
	for (;;)
	{
	ptr2 = ptr1;
	while (ptr2->next != head && ptr2->next != ptr1)
	{
	ptr2 = ptr2->next;
	}
	if (ptr2->next == head)
	break;

	head = head->next;
	}
	return (ptr2->next);
	}
	}
	return (NULL);
}
