#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to get.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	/* Check if the index is greater than the number of bits */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Shift the bit to the rightmost position and check its value */
	mask = 1;
	mask = mask << index;

	return ((n & mask) >> index);
}
