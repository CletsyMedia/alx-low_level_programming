#include <stdlib.h>

/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: Pointer to the memory block to fill.
 * @b: Byte to fill the memory with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	/* Iterate over each byte and set it to the specified value */
	for (idx = 0; idx < n; idx++)
		s[idx] = b;

	return (s);
}

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 *
 * @nmemb: The number of elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Return: Pointer to the newly allocated memory, or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	/* Check for invalid input */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory for the array */
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero using _memset */
	_memset(p, 0, nmemb * size);

	return (p);
}
