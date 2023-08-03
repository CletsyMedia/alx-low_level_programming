#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Calculates the number of bits needed to flip
 * from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	/* Count the number of set bits (1s) in result using for loop */
	for (; result != 0; count++)
	{
		result &= (result - 1);
	}

	return (count);
}
