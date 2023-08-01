#include "lists.h"

/**
 * sum_listint - Sums all elements of a list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all elements.
 */
int sum_listint(listint_t *head)
{
	int sum;

	/* Initialize the sum to 0 */
	sum = 0;

	/* Loop through the linked list and add up the data values */
	for (; head; head = head->next)
	{
	sum += head->n;
	}

	/* Return the calculated sum */
	return (sum);
}
