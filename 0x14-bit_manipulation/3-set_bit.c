#include <stdio.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number whose bit needs to be set.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Check if the index is greater than the number of bits in */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Create a mask with the bit at the given index set to 1 */
	mask = 1;
	mask = mask << index;

	/* Set the bit to 1 using the bitwise OR operation */
	*n = *n | mask;

	return (1);
}
