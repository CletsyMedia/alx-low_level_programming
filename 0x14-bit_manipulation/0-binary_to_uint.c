#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - Convert binary string to unsigned int
 * @b: Pointer to a binary string (composed of '0' and '1' characters)
 *
 * Return: The converted unsigned integer, or 0 if invalid input
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;
	unsigned int length;
	unsigned int idx;

	if (b == NULL)
	{
		/* Return 0 if the input string is NULL */
		return (0);
	}
	/* Use 'unsigned int' for length type */
	length = strlen(b);

	for (idx = 0; idx < length; idx++)
	{
		if (b[idx] != '0' && b[idx] != '1')
		{
			/* Return 0 if there's a non-binary character in the string */
			return (0);
		}

		/* Left shift the result to make space for the next bit */
		answer = answer << 1;

		/* Set the least significant bit based on the character */
		answer = answer | (b[idx] - '0');
	}

	return (answer);
}
