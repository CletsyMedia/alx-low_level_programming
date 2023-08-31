#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number whose bit needs to be cleared.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Check if the index is greater than the number of bits in */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Create a mask with the bit at the given index set to 0 */
	mask = 1;
	mask = mask << index;
	mask = ~mask;

	/* Clear the bit to 0 using the bitwise AND operation */
	*n = *n & mask;

	return (1);
}
