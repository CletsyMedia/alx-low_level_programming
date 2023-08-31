#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to convert and print.
 * Returns: The binary representation
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/* Recursively call the function to print the higher-order bits */
		print_binary(n >> 1);
	}

	/* Print the lowest-order bit */
	_putchar((n & 1) + '0');
}
