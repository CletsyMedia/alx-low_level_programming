#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	/* Create a multi-byte variable with a known value */
	unsigned int test_value = 1;
	/* Access the first byte of the multi-byte variable */
	unsigned char *byte_ptr = (unsigned char *)&test_value;

	/* If the first byte contains 1, it is little endian; */
	/* otherwise, it is big endian */
	return (byte_ptr[0] == 1);
}
